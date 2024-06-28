#ifndef VAR1
void FUN1(VAR2<int, int> VAR3);
static void FUN2()
{
 int VAR4;
 VAR2<int, int> VAR3;
 VAR4 = 0;
 VAR4 = 2;
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
 VAR4 = 0;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN5(VAR5);
 }
 else
 {
 FUN6("");
 }
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN3(VAR3);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
