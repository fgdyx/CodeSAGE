#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
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
 }
 if(VAR3)
 {
 {
 int VAR6;
 int VAR7[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN4(VAR7[VAR6]);
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
