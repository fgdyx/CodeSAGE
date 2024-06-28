#ifndef VAR1
static void FUN1(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 ;
}
static void FUN5(VAR2 * &VAR3)
{
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN5(VAR3);
 free(VAR3);
}
void FUN7()
{
 FUN4();
 FUN6();
}
#endif
