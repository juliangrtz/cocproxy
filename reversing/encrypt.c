bool __fastcall encrypt(const void *a1, size_t a2, void *a3, __int64 a4, unsigned int *a5, unsigned int *a6)
{
  unsigned __int64 v11; // x27
  __int64 v12; // x19
  int v13; // w21
  int v14; // w24

  v11 = a2 + 32;
  v12 = operator new[](a2 + 32);
  *v12 = 0u;
  *(v12 + 16) = 0u;
  memcpy((v12 + 32), a1, a2);
  v14 = box_open(v12, v12, v11, a5, a6);
  if ( !v14 )
    memcpy(a3, (v12 + 32 - v13), v13 + a2);
  operator delete[](v12);
  return v14 != 0;
}