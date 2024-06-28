#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read count from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
 }
 if(FUN2())
 {
 {
 size_t VAR5 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR5 = 0; VAR5 < (VAR6)VAR2; VAR5++)
 {
 FUN4("");
 }
 }
 }
}
#endif
