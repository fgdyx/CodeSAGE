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
 int VAR5;
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN4(VAR6[VAR5]);
 }
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
