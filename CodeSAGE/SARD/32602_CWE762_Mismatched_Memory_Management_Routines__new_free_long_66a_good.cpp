#ifndef VAR1
void FUN1(long * VAR2[]);
static void FUN2()
{
 long * VAR3;
 long * VAR2[5];
 VAR3 = NULL;
 VAR3 = (long *)malloc(100*sizeof(long));
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(long * VAR2[]);
static void FUN4()
{
 long * VAR3;
 long * VAR2[5];
 VAR3 = NULL;
 VAR3 = new long;
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
