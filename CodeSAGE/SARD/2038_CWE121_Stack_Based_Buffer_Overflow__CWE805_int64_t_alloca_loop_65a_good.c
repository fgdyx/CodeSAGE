#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR2 * VAR6 = (VAR2 *)FUN3(50*sizeof(VAR2));
 VAR2 * VAR7 = (VAR2 *)FUN3(100*sizeof(VAR2));
 VAR3 = VAR7;
 FUN4(VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
