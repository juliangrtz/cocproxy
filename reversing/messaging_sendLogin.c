bool __fastcall Messaging::sendLogin(std::recursive_mutex *a1)
{
  char *opaque; // x24
  __int64 v3; // x25
  int v4; // w20
  int v5; // w0
  int v6; // w8
  size_t v7; // x23
  char *v8; // x0
  char *v9; // x20
  char *v10; // x27
  size_t v11; // x26
  char *v12; // x8
  char *v13; // x24
  const void *v14; // x26
  __int64 v15; // x25
  int v16; // w0
  char *v17; // x21
  int v18; // w24
  _OWORD *v19; // x25
  _OWORD *v20; // x21
  _BOOL4 v21; // w22
  __int128 v22; // q1
  long double v23; // q0
  int v24; // w23
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x21
  __int64 v28; // x0
  int v29; // w0
  __int64 v30; // x21
  __int64 v31; // x21
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v36[2]; // [xsp+0h] [xbp-200h] BYREF
  char v37; // [xsp+10h] [xbp-1F0h]
  int v38[94]; // [xsp+18h] [xbp-1E8h] BYREF
  int v39[6]; // [xsp+190h] [xbp-70h] BYREF
  __int64 v40; // [xsp+1A8h] [xbp-58h]

  v40 = *__stack_chk_guard_ptr;
  opaque = a1[8].__m_.__opaque;
  sub_100D7E164(a1[8].__m_.__opaque, 24);
  a1[8].__m_.__opaque[0] &= ~1u;
  sub_100D7E160(&a1[8].__m_.__opaque[48], &a1[9].__m_.__opaque[16]);
  nullsub_34();
  sub_100D0DAEC(v36, a1[5].__m_.__opaque, a1 + 4);
  (*(**(v36[0] + 24) + 16LL))(*(v36[0] + 24));
  v3 = sub_100B8F554(*(v36[0] + 24));
  v4 = *(v36[0] + 8) - *v36[0];
  v5 = sub_100B8F55C(*(v36[0] + 24));
  v6 = v5 + v4 + 24;
  v7 = v6;
  if ( v5 + v4 == -24 )
  {
    v10 = 0LL;
    v9 = 0LL;
  }
  else
  {
    if ( (v6 & 0x80000000) != 0 )
      abort();
    operator new(v6);
    v9 = v8;
    v10 = &v8[v7];
    bzero(v8, v7);
  }
  v11 = *(v36[0] + 8) - *v36[0];
  memmove(v9, *v36[0], v11);
  v12 = &v9[v11];
  *v12 = *opaque;
  *(v12 + 2) = *(opaque + 2);
  v13 = &v9[v11 + 24];
  v14 = sub_100B88458(v3);
  v15 = sub_100B88458(v3);
  v16 = sub_100B8F55C(*(v36[0] + 24));
  memmove(v13, v14, v15 + v16 - v14);
  blake2b_init(v38, 24);
  Blake2b::update(v38, v17, 64);
  blake2b_final(v38, v39);
  v18 = v7 + 48;
  v19 = operator new[](v7 + 48);
  v21 = sub_100D7DD94(v9, v7, v19 + 2, v7 + 16, v39, &a1[9].__m_.__opaque[16]);
  if ( v21 )
  {
    operator delete[](v19);
  }
  else
  {
    if ( v10 - v9 >= 1 )
      bzero(v9, v10 - v9);
    v22 = v20[1];
    *v19 = *v20;
    v19[1] = v22;
    *&v23 = operator new(152LL);
    v24 = (*(**(v36[0] + 24) + 40LL))(*(v36[0] + 24), v23);
    v26 = sub_100B8F4B4(v25, 0);
    *v27 = off_100F6B8A8;
    *(v27 + 144) = v24;
    v28 = sub_100B8F554(v26);
    sub_100B88404(v28, v19, v18);
    v29 = sub_100B8F564(*(v36[0] + 24));
    sub_100B8F56C(v30, v29);
    Messaging::send(a1, v31);
    v32 = *(v36[0] + 24);
    if ( v32 )
    {
      (*(*v32 + 56LL))(v32);
      v33 = v36[0];
      v34 = *(v36[0] + 24);
      if ( v34 )
      {
        (*(*v34 + 8LL))(v34);
        v33 = v36[0];
      }
      *(v33 + 24) = 0LL;
    }
  }
  operator delete();
  if ( v37 )
    std::recursive_mutex::unlock(v36[1]);
  return !v21;
}