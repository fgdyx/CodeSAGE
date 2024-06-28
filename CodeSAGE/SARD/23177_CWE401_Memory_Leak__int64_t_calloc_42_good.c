#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 return VAR3;
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 ;
}
static VAR2 * FUN5(VAR2 * VAR3)
{
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0] = 5LL;
 FUN3(VAR3[0]);
 return VAR3;
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN5(VAR3);
 free(VAR3);
}
void FUN7()
{
 FUN6();
 FUN4();
}
#endif
