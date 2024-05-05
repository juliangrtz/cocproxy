bool __fastcall secretbox_open(
        const void *a1,
        size_t a2,
        void *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6,
        int a7)
{
  __int64 v12; // x19
  unsigned __int64 v13; // x28
  __int64 v14; // x20
  size_t v15; // x21
  int v16; // w0
  int v17; // w23

  v12 = a7;
  v13 = a2 - a7 + 32;
  v14 = operator new[](v13);
  bzero(v14, 32 - a7);
  memcpy((v14 + 32 - v12), a1, a2);
  box(v14, v14, v13, a5, a6, a7);
  v17 = v16;
  if ( !v16 )
    memcpy(a3, (v14 + 32), v15);
  operator delete[](v14);
  return v17 != 0;
}