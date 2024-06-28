#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR3 * VAR6 = (VAR3 *)FUN3(50*sizeof(VAR3));
 VAR3 * VAR7 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR5 = VAR7;
 VAR4.FUN4(VAR5);
 VAR4.FUN4(VAR5);
 VAR4.FUN4(VAR5);
 FUN1(VAR4);
}
void FUN5()
{
 FUN2();
}
#endif
