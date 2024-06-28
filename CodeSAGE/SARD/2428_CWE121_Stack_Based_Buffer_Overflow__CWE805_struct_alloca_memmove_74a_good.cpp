#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR3 * VAR6 = (VAR3 *)FUN3(50*sizeof(VAR3));
 VAR3 * VAR7 = (VAR3 *)FUN3(100*sizeof(VAR3));
 VAR5 = VAR7;
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN1(VAR4);
}
void FUN4()
{
 FUN2();
}
#endif
