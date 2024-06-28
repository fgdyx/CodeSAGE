#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE124_Buffer_Underwrite__CWE839_fgets_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 7;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int VAR7[10] = { 0 };
 if (VAR2 < 10)
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 int VAR2;
 CWE124_Buffer_Underwrite__CWE839_fgets_34_unionType VAR3;
 VAR2 = -1;
 {
 char VAR8[VAR9] = "";
 if (fgets(VAR8, VAR9, stdin) != NULL)
 {
 VAR2 = FUN5(VAR8);
 }
 else
 {
 FUN3("");
 }
 }
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int VAR7[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
