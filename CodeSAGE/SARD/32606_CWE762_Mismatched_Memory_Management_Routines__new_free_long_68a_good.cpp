#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = (long *)malloc(100*sizeof(long));
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = new long;
 VAR4 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
