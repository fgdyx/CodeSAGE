#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN4(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN5(VAR3[0]);
 VAR4 = VAR3;
 FUN1();
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN5(VAR3[0]);
 VAR5 = VAR3;
 FUN2();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
