#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 ;
}
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN4(VAR3[0]);
 FUN1(VAR3);
}
static void FUN5(VAR2 * VAR3)
{
 free(VAR3);
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN4(VAR3[0]);
 FUN5(VAR3);
}
void FUN7()
{
 FUN6();
 FUN2();
}
#endif
