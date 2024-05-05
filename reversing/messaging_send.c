__int64 __fastcall Messaging::send(__int64 this, __int64 piranhaMessage)
{
  unsigned int v3; // w9
  unsigned int v4; // w8
  int v7; // w8
  int v8; // w9
  __int64 v9; // x11
  __int64 v10; // x21
  __int64 v11; // [xsp+0h] [xbp-40h]
  __int64 v12; // [xsp+0h] [xbp-40h]
  char v13[16]; // [xsp+10h] [xbp-30h] BYREF

  v3 = atomic_load((this + 24));
  if ( !v3 || (v4 = atomic_load((this + 24)), v4 == 1) )
  {
    v11 = (*(*piranhaMessage + 40LL))(piranhaMessage);
    sub_100D82FA4("Messaging: Messaging::send message type %d when not connected", v13, v11);
LABEL_4:
    sub_100D80350(v13);
    (*(*piranhaMessage + 56LL))(piranhaMessage);
    (*(*piranhaMessage + 8LL))(piranhaMessage);
    return 0LL;
  }
  if ( sub_100B8F508(piranhaMessage) )
  {
    v12 = (*(*piranhaMessage + 40LL))(piranhaMessage);
    sub_100D82FA4("Messaging: Messaging::send server to client message type %d", v13, v12);
    goto LABEL_4;
  }
  pthread_mutex_lock((this + 432));
  v7 = *(this + 508);
  v8 = *(this + 504);
  if ( v7 < v8 )
  {
    v9 = *(this + 516);
    *(*(this + 496) + 8 * v9) = piranhaMessage;
    *(this + 516) = (v9 + 1) % v8;
    *(this + 508) = v7 + 1;
    pthread_mutex_unlock((this + 432));
  }
  else
  {
    pthread_mutex_unlock((this + 432));
    if ( piranhaMessage )
    {
      (*(*piranhaMessage + 56LL))(piranhaMessage);
      (*(*piranhaMessage + 8LL))(piranhaMessage);
    }
  }
  std::mutex::lock((this + 96));
  ++*(this + 208);
  std::mutex::unlock((this + 96));
  std::condition_variable::notify_one((this + 160));
  return v10;
}