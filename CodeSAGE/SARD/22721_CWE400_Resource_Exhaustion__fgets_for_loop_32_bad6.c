#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read count from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 size_t VAR7 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR7 = 0; VAR7 < (VAR8)VAR2; VAR7++)
 {
 FUN3("");
 }
 }
 }
}
#endif
