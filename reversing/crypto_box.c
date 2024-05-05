bool __fastcall box(const void *a1, __int64 a2, void *a3, __int64 a4, unsigned int *a5, __int64 a6)
{
  unsigned __int64 v10; // x25
  __int64 v11; // x19
  size_t v12; // x21
  __int64 v13; // x21
  int v14; // w0
  int v15; // w22

  v10 = a2 + 16;
  v11 = operator new[](a2 + 16);
  *v11 = 0LL;
  *(v11 + 8) = 0LL;
  memcpy((v11 + 16), a1, v12);
  sub_1001AE378(v11, v11, v10, a5, a6);
  v15 = v14;
  if ( !v14 )
    memcpy(a3, (v11 + 32), v13 - 16);
  operator delete[](v11);
  return v15 != 0;
}