#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 {
 char VAR5[VAR6] = "";
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN5(VAR5, NULL, 0);
 }
 else
 {
 FUN6("");
 }
 }
 const VAR3& VAR4 = FUN7();
 VAR4.FUN3(VAR2);
}
void FUN8()
{
 FUN1();
 FUN4();
}
#endif
