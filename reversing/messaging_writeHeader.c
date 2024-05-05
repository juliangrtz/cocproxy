void __fastcall Messaging::writeHeader(__int64 this, __int64 piranhaMessage)
{
  std::recursive_mutex *v4; // x19
  std::__shared_weak_count *v5; // x19
  __int64 v6; // x28
  unsigned __int64 *p_shared_owners; // x8
  unsigned __int64 v8; // x9
  __int64 messageLength; // x22
  int v10; // w0
  std::__shared_weak_count *v11; // x0
  std::__shared_weak_count *v12; // x20
  unsigned __int64 *v13; // x27
  std::__shared_weak_count_vtbl *v14; // x21
  void *v15; // x25
  __int64 v16; // x0
  const void *v17; // x26
  __int64 messageId; // x24
  std::__1 *v19; // x0
  __int64 v20; // x21
  unsigned int v21; // w23
  char *v22; // x0
  unsigned __int64 *v23; // x8
  unsigned __int64 v24; // x9
  unsigned __int64 v25; // x9
  __int64 v26; // x21
  unsigned __int64 *v27; // x8
  unsigned __int64 v28; // x9
  std::__shared_weak_count *v29; // x21
  unsigned __int64 *v30; // x8
  unsigned __int64 v31; // x9
  unsigned __int64 v32; // x8
  unsigned __int64 *v33; // x8
  unsigned __int64 v34; // x9
  __int64 v35; // [xsp+8h] [xbp-88h] BYREF
  std::recursive_mutex *v36; // [xsp+10h] [xbp-80h] BYREF
  __int64 v37; // [xsp+18h] [xbp-78h]
  __int64 v38; // [xsp+20h] [xbp-70h]
  int v39; // [xsp+28h] [xbp-68h]
  __int64 v40; // [xsp+30h] [xbp-60h]
  std::__shared_weak_count *v41; // [xsp+38h] [xbp-58h]

  v4 = (this + 256);
  nullsub_34();
  sub_100D0DAEC(&v35, this + 328, v4);
  v6 = *(v35 + 32);
  v5 = *(v35 + 40);
  if ( v5 )
  {
    p_shared_owners = &v5->__shared_owners_;
    do
      v8 = __ldxr(p_shared_owners);
    while ( __stxr(v8 + 1, p_shared_owners) );
  }
  if ( v37 )
    std::recursive_mutex::unlock(v36);
  if ( !v6 )
    goto LABEL_32;
  (*(*piranhaMessage + 16LL))(piranhaMessage);
  messageLength = sub_100B8F55C(piranhaMessage);
  v10 = (*(**(this + 408) + 32LL))(*(this + 408));
  operator new[](messageLength + v10 + 7);
  operator new(32LL);
  v12 = v11;
  v11->__shared_owners_ = 0LL;
  v13 = &v11->__shared_owners_;
  v11->__vftable = &off_100F63858;
  v11->__shared_weak_owners_ = 0LL;
  v11[1].__vftable = v14;
  v15 = &v14->~__shared_weak_count + 7;
  v16 = sub_100B8F54C(piranhaMessage);
  v17 = sub_100B88458(v16);
  if ( (*(*piranhaMessage + 40LL))(piranhaMessage) == 10100 || (*(*piranhaMessage + 40LL))(piranhaMessage) == 10101 )
  {
    memmove(v15, v17, messageLength);
  }
  else
  {
    (*(**(this + 408) + 24LL))(*(this + 408), v17, v15, messageLength);
    LODWORD(messageLength) = (*(**(this + 408) + 32LL))(*(this + 408)) + messageLength;
  }
  messageId = (*(*piranhaMessage + 40LL))(piranhaMessage);
  v19 = sub_100B8F564(piranhaMessage);
  v21 = v19;
  *v20 = BYTE1(messageId);
  *(v20 + 1) = messageId;
  *(v20 + 2) = BYTE2(messageLength);
  *(v20 + 3) = BYTE1(messageLength);
  *(v20 + 4) = messageLength;
  if ( messageLength >= 0x1000000 )
  {
    sub_100D82FA4("Trying to send too big message, type %d", &v35, messageId);
    if ( SHIDWORD(v35) >= 8 )
      v22 = v36;
    else
      v22 = &v36;
    sub_100B89308(v22, 1);
    v19 = sub_100D80350(&v35);
  }
  *(v20 + 5) = bswap32(v21) >> 16;
  if ( v5 )
  {
    v23 = &v5->__shared_owners_;
    do
      v24 = __ldxr(v23);
    while ( __stxr(v24 + 1, v23) );
  }
  do
    v25 = __ldxr(v13);
  while ( __stxr(v25 + 1, v13) );
  v35 = v6;
  v36 = v20;
  v37 = messageLength + 7LL;
  v38 = 0LL;
  v39 = 0;
  v40 = v20;
  v41 = v12;
  std::system_category(v19);
  sub_100D79ADC(&v35, 0, 0LL, 1);
  v26 = v41;
  if ( v41 )
  {
    v27 = &v41->__shared_owners_;
    do
      v28 = __ldaxr(v27);
    while ( __stlxr(v28 - 1, v27) );
    if ( !v28 )
    {
      (*(*v26 + 16LL))(v26);
      std::__shared_weak_count::__release_weak(v29);
    }
  }
  if ( v5 )
  {
    v30 = &v5->__shared_owners_;
    do
      v31 = __ldaxr(v30);
    while ( __stlxr(v31 - 1, v30) );
    if ( !v31 )
    {
      (v5->__on_zero_shared)(v5);
      std::__shared_weak_count::__release_weak(v5);
    }
  }
  do
    v32 = __ldaxr(v13);
  while ( __stlxr(v32 - 1, v13) );
  if ( !v32 )
  {
    (v12->__on_zero_shared)(v12);
    std::__shared_weak_count::__release_weak(v12);
    if ( !v5 )
      return;
  }
  else
  {
LABEL_32:
    if ( !v5 )
      return;
  }
  v33 = &v5->__shared_owners_;
  do
    v34 = __ldaxr(v33);
  while ( __stlxr(v34 - 1, v33) );
  if ( !v34 )
  {
    (v5->__on_zero_shared)(v5);
    std::__shared_weak_count::__release_weak(v5);
  }
}