#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
static void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR2 * VAR5 = (VAR2 *)FUN3(50*sizeof(VAR2));
 VAR2 * VAR6 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR4 = VAR6;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
