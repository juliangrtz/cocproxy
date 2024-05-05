bool __fastcall decrypt(unsigned int *a1, __int64 a2, void *a3, int a4)
{
  unsigned int *v7; // x23
  __int64 v8; // x3
  const void *v9; // x21

  v7 = a1 + 10;
  sub_100B15128(a1 + 40);
  v8 = (a4 - (*(*a1 + 32LL))(a1));
  return secretbox_open(v9, a4, a3, v8, v7, a1 + 2, 16);
}