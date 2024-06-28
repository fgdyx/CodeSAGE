#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN4(&VAR3[0]);
 FUN1(VAR3);
}
void FUN5(VAR2 * VAR3);
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)malloc(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN4(&VAR3[0]);
 FUN5(VAR3);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
