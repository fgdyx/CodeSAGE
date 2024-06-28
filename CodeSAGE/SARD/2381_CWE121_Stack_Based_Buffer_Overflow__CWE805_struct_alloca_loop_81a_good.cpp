#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN2(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN2(100*sizeof(VAR2));
 VAR3 = VAR5;
 const VAR6& VAR7 = FUN3();
 VAR7.FUN4(VAR3);
}
void FUN5()
{
 FUN1();
}
#endif
