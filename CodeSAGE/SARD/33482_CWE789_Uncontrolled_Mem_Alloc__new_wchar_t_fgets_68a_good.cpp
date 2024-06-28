#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN5(VAR4, NULL, 0);
 }
 else
 {
 FUN6("");
 }
 }
 VAR6 = VAR2;
 FUN2();
}
void FUN7()
{
 FUN3();
 FUN4();
}
#endif
