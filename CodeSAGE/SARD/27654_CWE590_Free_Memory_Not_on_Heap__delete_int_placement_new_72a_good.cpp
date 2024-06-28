#ifndef VAR1
void FUN1(VAR2<int *> VAR3);
static void FUN2()
{
 int * VAR4;
 VAR2<int *> VAR3;
 VAR4 = NULL;
 {
 int * VAR5 = new int;
 *VAR5 = 5;
 VAR4 = VAR5;
 }
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
void FUN5()
{
 FUN2();
}
#endif
