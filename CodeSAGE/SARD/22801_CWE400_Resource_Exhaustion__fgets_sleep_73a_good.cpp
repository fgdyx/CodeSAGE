#ifndef VAR1
void FUN1(VAR2<int> VAR3);
static void FUN2()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 VAR4 = 20;
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
void FUN4(VAR2<int> VAR3);
static void FUN5()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN6(VAR5);
 }
 else
 {
 FUN7("");
 }
 }
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN4(VAR3);
}
void FUN8()
{
 FUN2();
 FUN5();
}
#endif
