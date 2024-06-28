#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
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
 goto VAR6;
VAR6:
 {
 int VAR7;
 int VAR8[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR8[VAR2] = 1;
 for(VAR7 = 0; VAR7 < 10; VAR7++)
 {
 FUN4(VAR8[VAR7]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
