#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE124_Buffer_Underwrite__CWE839_fgets_34_unionType VAR3;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 VAR3.VAR6 = VAR2;
 {
 int VAR2 = VAR3.VAR7;
 {
 int VAR8;
 int VAR9[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 VAR9[VAR2] = 1;
 for(VAR8 = 0; VAR8 < 10; VAR8++)
 {
 FUN4(VAR9[VAR8]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
