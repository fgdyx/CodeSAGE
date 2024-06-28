#ifndef VAR1
void FUN1(VAR2<int, int> VAR3);
static void FUN2()
{
 int VAR4;
 VAR2<int, int> VAR3;
 VAR4 = -1;
 VAR4 = 7;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3(VAR2<int, int> VAR3);
static void FUN4()
{
 int VAR4;
 VAR2<int, int> VAR3;
 VAR4 = -1;
 VAR4 = 10;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN3(VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
