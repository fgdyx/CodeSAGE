#ifndef VAR1
void FUN1(VAR2<int, VAR3> VAR4);
static void FUN2()
{
 size_t VAR5;
 VAR2<int, VAR3> VAR4;
 VAR5 = 0;
 VAR5 = 20;
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN1(VAR4);
}
void FUN3(VAR2<int, VAR3> VAR4);
static void FUN4()
{
 size_t VAR5;
 VAR2<int, VAR3> VAR4;
 VAR5 = 0;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR5 = FUN5(VAR6, NULL, 0);
 }
 else
 {
 FUN6("");
 }
 }
 VAR4[0] = VAR5;
 VAR4[1] = VAR5;
 VAR4[2] = VAR5;
 FUN3(VAR4);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
