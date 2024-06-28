#ifndef VAR1
static void FUN1(int &VAR2)
{
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read count from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 size_t VAR5 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR5 = 0; VAR5 < (VAR6)VAR2; VAR5++)
 {
 FUN3("");
 }
 }
}
#endif
