#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 VAR6* VAR7 = new VAR8;
 VAR7->FUN4(VAR3);
 delete VAR7;
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 VAR3[0].VAR4 = 0;
 VAR3[0].VAR5 = 0;
 FUN3(&VAR3[0]);
 VAR6* VAR7 = new VAR9;
 VAR7->FUN4(VAR3);
 delete VAR7;
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
