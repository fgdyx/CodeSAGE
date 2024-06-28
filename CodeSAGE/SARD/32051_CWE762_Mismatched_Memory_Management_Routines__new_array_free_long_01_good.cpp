#ifndef VAR1
static void FUN1()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)malloc(100*sizeof(long));
 free(VAR2);
}
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = new long[100];
 delete [] VAR2;
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
