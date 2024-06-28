#ifndef VAR1
void FUN1();
static void FUN2()
{
 VAR2 * VAR3;
 VAR2 * VAR4 = (VAR2 *)FUN3(50*sizeof(VAR2));
 VAR2 * VAR5 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR3 = VAR5;
 VAR6 = VAR3;
 FUN1();
}
void FUN4()
{
 FUN2();
}
#endif
