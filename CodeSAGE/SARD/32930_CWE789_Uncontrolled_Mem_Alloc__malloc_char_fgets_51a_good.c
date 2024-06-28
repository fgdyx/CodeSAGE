#ifndef VAR1
void FUN1(size_t VAR2);
static void FUN2()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 FUN1(VAR2);
}
void FUN3(size_t VAR2);
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN5(VAR3, NULL, 0);
 }
 else
 {
 FUN6("");
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
