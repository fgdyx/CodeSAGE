#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
static void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 {
 VAR3 * VAR6 = new VAR3;
 VAR6->VAR7 = 2;
 VAR6->VAR8 = 2;
 VAR5 = VAR6;
 }
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN1(VAR4);
}
void FUN4()
{
 FUN2();
}
#endif
