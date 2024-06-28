#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<int, VAR3 *> VAR4;
 VAR5 = NULL;
 VAR5 = FUN3("","",stdin);
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
