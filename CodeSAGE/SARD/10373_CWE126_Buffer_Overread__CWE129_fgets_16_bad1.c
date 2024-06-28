#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 while(1)
 {
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
 while(1)
 {
 {
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR2 >= 0)
 {
 FUN4(VAR5[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
#endif
