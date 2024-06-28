#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
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
 if(VAR3==5)
 {
 {
 int VAR6;
 int * VAR7 = new int[10];
 for (VAR6 = 0; VAR6 < 10; VAR6++)
 {
 VAR7[VAR6] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
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
 delete[] VAR7;
 }
 }
}
#endif
