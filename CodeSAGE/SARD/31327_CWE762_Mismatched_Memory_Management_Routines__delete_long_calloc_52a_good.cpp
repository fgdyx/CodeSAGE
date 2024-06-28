#ifndef VAR1
void FUN1(long * VAR2);
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = new long;
 FUN1(VAR2);
}
void FUN3(long * VAR2);
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)calloc(100, sizeof(long));
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
