#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 VAR3* VAR4 = new VAR5;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN4(VAR6, NULL, 0);
 }
 else
 {
 FUN5("");
 }
 }
 VAR3* VAR4 = new VAR8;
 VAR4->FUN2(VAR2);
 delete VAR4;
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
