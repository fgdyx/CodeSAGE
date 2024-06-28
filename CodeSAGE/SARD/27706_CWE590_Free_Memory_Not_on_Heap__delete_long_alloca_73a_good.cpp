#ifndef VAR1
void FUN1(VAR2<long *> VAR3);
static void FUN2()
{
 long * VAR4;
 VAR2<long *> VAR3;
 VAR4 = NULL;
 {
 long * VAR5 = new long;
 *VAR5 = 5L;
 VAR4 = VAR5;
 }
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
