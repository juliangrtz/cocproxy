bool __fastcall Messaging::handlePepperLoginResponse(__int64 a1, __int64 a2)
{
  __int64 v3; // x23
  __int128 *v4; // x20
  __int64 v5; // x25
  size_t v6; // x24
  void *v7; // x0
  const void *v8; // x0
  void *v9; // x21
  __int64 v10; // x21
  _BOOL4 v11; // w22
  _BOOL8 v12; // x19
  const void *v13; // x26
  __int128 v14; // q1
  int v15; // w25
  void *v16; // x28
  void *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x23
  __int64 v20; // x0
  __int64 v21; // x24
  __int64 v22; // x0
  __int64 v23; // x0
  __int128 v25; // [xsp+0h] [xbp-290h] BYREF
  __int64 v26; // [xsp+10h] [xbp-280h]
  __int128 v27; // [xsp+20h] [xbp-270h] BYREF
  __int128 v28; // [xsp+30h] [xbp-260h]
  __int128 v29; // [xsp+40h] [xbp-250h] BYREF
  __int64 v30; // [xsp+50h] [xbp-240h]
  __int128 v31; // [xsp+60h] [xbp-230h] BYREF
  __int128 v32; // [xsp+70h] [xbp-220h]
  __int128 v33; // [xsp+80h] [xbp-210h]
  __int128 v34; // [xsp+90h] [xbp-200h]
  int nonces[94]; // [xsp+A0h] [xbp-1F0h] BYREF
  int v36[6]; // [xsp+218h] [xbp-78h] BYREF
  __int64 v37; // [xsp+230h] [xbp-60h]

  v37 = *__stack_chk_guard_ptr;
  v3 = sub_100B8F554(a2);
  blake2b_init(nonces, 24);
  v4 = (a1 + 520);
  Blake2b::update(nonces, (a1 + 520), 24);
  Blake2b::update(nonces, (a1 + 568), 64);
  blake2b_final(nonces, v36);
  v5 = *(v3 + 40);
  v6 = v5 - 16;
  if ( v5 != 16 )
  {
    if ( (v6 & 0x80000000) != 0 )
      abort();
    operator new(v5 - 16);
    bzero(v7, v6);
  }
  v8 = sub_100B88458(v3);
  v11 = box(v8, v5, v9, v6, v36, a1 + 600);
  if ( !v11 )
  {
    *(a1 + 544) = *v10;
    *(a1 + 560) = *(v10 + 16);
    v13 = (v10 + 56);
    v14 = *(v10 + 40);
    v33 = *(v10 + 24);
    v34 = v14;
    v15 = v5 - 72;
    v16 = operator new[](v15);
    memmove(v16, v13, v15);
    bzero(v17, v6);
    sub_100B88404(v3, v16, v15);
    operator new(64LL);
    v19 = v18;
    v31 = v33;
    v32 = v34;
    v29 = *(a1 + 544);
    v30 = *(a1 + 560);
    PepperEncrypter::PepperEncrypter(v18, &v31, &v29);
    v29 = 0uLL;
    v30 = 0LL;
    v31 = 0u;
    v32 = 0u;
    operator new(64LL);
    v21 = v20;
    v27 = v33;
    v28 = v34;
    v25 = *v4;
    v26 = *(a1 + 536);
    PepperEncrypter::PepperEncrypter(v20, &v27, &v25);
    v25 = 0uLL;
    v26 = 0LL;
    v27 = 0u;
    v28 = 0u;
    *v4 = 0u;
    *(a1 + 536) = 0u;
    *(a1 + 552) = 0u;
    *(a1 + 568) = 0u;
    *(a1 + 584) = 0u;
    *(a1 + 600) = 0u;
    *(a1 + 616) = 0u;
    v22 = *(a1 + 400);
    if ( v22 )
      (*(*v22 + 8LL))(v22);
    *(a1 + 400) = 0LL;
    v23 = *(a1 + 408);
    if ( v23 )
      (*(*v23 + 8LL))(v23);
    *(a1 + 400) = v19;
    *(a1 + 408) = v21;
    *(a1 + 416) = 0LL;
    goto LABEL_12;
  }
  if ( v10 )
  {
LABEL_12:
    v12 = !v11;
    operator delete();
    return v12;
  }
  return 0LL;
}