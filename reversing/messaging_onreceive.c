void __fastcall Messaging::onReceive(__int64 *a1)
{
  __int64 v2; // x10
  int v3; // w9
  unsigned __int64 v4; // x8
  bool v5; // zf
  unsigned __int64 v6; // x10
  bool v7; // cc
  unsigned __int64 v8; // x10
  __int64 v10; // x19
  __int64 *v11; // x22
  unsigned int *v12; // x9
  __int64 v13; // x0
  __int64 v14; // x21
  unsigned int v15; // w8
  __int64 v16; // x9
  __int64 v17; // x21
  __int64 v19; // x21
  int v20; // w8
  int v21; // w9
  __int64 v22; // x11
  __int64 v23; // x23
  __int64 v24; // x22
  __int64 *v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  __int64 v28; // x21
  __int64 v29; // x21
  __int64 v30; // x21
  __int64 v31; // x21
  __int64 v32; // x22
  __int64 v33; // x0
  __int64 v34; // x21
  __int64 v35; // x21
  const void *v36; // x0
  __int64 v37; // x21
  __int64 v38; // x22
  __int64 v39; // x0
  __int64 v40; // x21
  __int64 v41; // x21
  __int64 v42; // x22
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x9
  char v46[16]; // [xsp+18h] [xbp-58h] BYREF
  __int64 v47; // [xsp+28h] [xbp-48h] BYREF
  std::recursive_mutex *v48; // [xsp+30h] [xbp-40h]
  char v49; // [xsp+38h] [xbp-38h]

  v2 = a1[12];
  v3 = *(a1 + 20);
  *(a1 + 8) = 0;
  v4 = a1[3] + v2;
  a1[3] = v4;
  if ( v2 )
    v5 = 0;
  else
    v5 = v3 == 0;
  if ( v5 )
  {
    v11 = a1 + 5;
    v10 = a1[5];
    v12 = a1[8];
    if ( v4 == v12[1] )
      goto LABEL_11;
LABEL_20:
    nullsub_34();
    sub_100D0DAEC(&v47, v10 + 328, (v10 + 256));
    v23 = *(v47 + 32);
    v24 = v11[1];
    if ( v49 )
      std::recursive_mutex::unlock(v48);
    if ( v23 == v24 )
    {
      nullsub_34();
      sub_100D0DAEC(&v47, v28, (v10 + 256));
      if ( *(v47 + 32) )
        sub_100D700AC(v10, (v47 + 32));
      if ( v49 )
        std::recursive_mutex::unlock(v48);
    }
    return;
  }
  v6 = a1[2];
  v7 = v6 > v4;
  v8 = v6 - v4;
  if ( v7 && v3 == 0 )
  {
    v25 = *a1;
    v26 = a1[1] + v4;
    v27 = 0x10000LL;
    if ( v8 < 0x10000 )
      v27 = v8;
    v47 = v26;
    v48 = v27;
    sub_100D78A1C(v25, &v47, a1);
    return;
  }
  v11 = a1 + 5;
  v10 = a1[5];
  if ( v3 )
    goto LABEL_20;
  v12 = a1[8];
  if ( v4 != v12[1] )
    goto LABEL_20;
LABEL_11:
  v13 = (*(**(v10 + 424) + 24LL))(*(v10 + 424), *v12);
  if ( v13 )
  {
    sub_100B8F56C(v13, *(a1[8] + 8));
    v15 = atomic_load((v10 + 24));
    switch ( v15 )
    {
      case 0u:
      case 1u:
      case 2u:
        v16 = atomic_load((v10 + 24));
        atomic_load((v10 + 24));
        sub_100D82FA4("Messaging: readNewMessages should not be called during state %d %s", &v47, v16, "");
        sub_100D80350(&v47);
        goto LABEL_14;
      case 3u:
        v32 = a1[8];
        v33 = sub_100B8F554(v14);
        sub_100B88404(v33, *(v32 + 24), *(v32 + 4));
        *(v32 + 24) = 0LL;
        (*(*v34 + 24LL))(v34);
        if ( *a1[8] == 20100 )
        {
          v36 = sub_100B90E04(v35);
          sub_100D70810(v10, v36, *(v37 + 152));
          nullsub_34();
          sub_100D0DAEC(&v47, v10 + 328, (v10 + 256));
          if ( *(v47 + 24) )
          {
            if ( Messaging::sendLogin(v10) )
            {
              atomic_store(4u, (v10 + 24));
            }
            else
            {
              sub_100D82FA4("Messaging: login send failed! disconnecting", v46);
              sub_100D80350(v46);
              sub_100D700AC(v10, a1 + 6);
            }
          }
          if ( v49 )
            std::recursive_mutex::unlock(v48);
          goto LABEL_14;
        }
        v45 = atomic_load((v10 + 24));
        atomic_load((v10 + 24));
        sub_100D82FA4("Messaging: expecting ServerHelloMessage during state %d %s, received %d ", &v47, v45, "", *a1[8]);
        sub_100D80350(&v47);
        if ( *a1[8] != 20103 )
          goto LABEL_14;
        goto LABEL_15;
      case 4u:
        v38 = a1[8];
        v39 = sub_100B8F554(v14);
        sub_100B88404(v39, *(v38 + 24), *(v38 + 4));
        *(v38 + 24) = 0LL;
        if ( !Messaging::handlePepperLoginResponse(v10, v40) )
        {
          sub_100D82FA4("Messaging: login response failed! disconnecting", &v47);
          sub_100D80350(&v47);
          sub_100D700AC(v10, a1 + 6);
LABEL_14:
          (*(*v14 + 56LL))(v14);
          (*(*v17 + 8LL))(v17);
          v14 = 0LL;
          goto LABEL_15;
        }
        atomic_store(5u, (v10 + 24));
        *(v10 + 16) = (loc_100D9FF94)();
LABEL_44:
        (*(*v41 + 24LL))(v41);
        if ( *a1[8] == 20000 )
        {
          v44 = *(v10 + 416);
          if ( v44 )
            (*(*v44 + 16LL))(v44, v10, v14);
          goto LABEL_14;
        }
LABEL_15:
        if ( atomic_load((v10 + 24)) )
        {
          if ( v14 )
          {
            pthread_mutex_lock((v10 + 632));
            v20 = *(v10 + 708);
            v21 = *(v10 + 704);
            if ( v20 >= v21 )
            {
              pthread_mutex_unlock((v10 + 632));
              (*(*v30 + 56LL))(v30);
              (*(*v31 + 8LL))(v31);
            }
            else
            {
              v22 = *(v10 + 716);
              *(*(v10 + 696) + 8 * v22) = v19;
              *(v10 + 716) = (v22 + 1) % v21;
              *(v10 + 708) = v20 + 1;
              pthread_mutex_unlock((v10 + 632));
            }
          }
          sub_100D6FD2C(v10, a1 + 6);
        }
        else if ( v14 )
        {
          (*(*v14 + 56LL))(v14);
          (*(*v29 + 8LL))(v29);
        }
        break;
      case 5u:
        if ( (sub_100D6FF74(v10, *(a1[8] + 24), *a1[8], (a1[8] + 4)) & 1) == 0 )
          goto LABEL_14;
        v42 = a1[8];
        v43 = sub_100B8F554(v14);
        sub_100B88404(v43, *(v42 + 24), *(v42 + 4));
        *(v42 + 24) = 0LL;
        goto LABEL_44;
      default:
        goto LABEL_15;
    }
  }
  else
  {
    sub_100D6FD2C(v10, a1 + 6);
  }
}