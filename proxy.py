# coding=utf8
import os
import sys
import frida

print("[+] Getting USB device...")
device = frida.get_usb_device(timeout=2)
applications = device.enumerate_applications(scope="full")
applicationNames = list(map(lambda app: app.name, applications))

# A rather hacky way to check if the connected device has iOS installed.
# For some reason, there is no function like frida.get_usb_device().os
if not "App Store" in applicationNames:
    print("[-] That is not an iOS device. Aborting...", file=sys.stderr)
    exit(-1)
else:
    print(f"[+] {device}")

identifier = next((x for x in applications if x.name == "Clash of Clans"), None).identifier
if identifier == None:
    print("[-] Clash of Clans is not installed on this device. Aborting...", file=sys.stderr)
    exit(-1)
else:
    print(f"[+] Found Clash of Clans")

print("[+] Launching Clash of Clans with the proxy...")

if not os.path.exists("proxy.js"):
    print("[-] Unable to find proxy.js. Run 'npm install' in this directory first.")
    exit(-1)

coc_pid = device.spawn(identifier)
session = device.attach(coc_pid)
s = open("proxy.js", "r").read()
script = session.create_script(s)
script.load()
device.resume(coc_pid)
sys.stdin.read()
