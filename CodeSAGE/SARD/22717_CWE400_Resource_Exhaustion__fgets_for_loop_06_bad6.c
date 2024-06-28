#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read count from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(VAR3==5)
 {
 {
 size_t VAR6 = 0;
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation */
 for (VAR6 = 0; VAR6 < (VAR7)VAR2; VAR6++)
 {
 FUN3("");
 }
 }
 }
}
#endif
