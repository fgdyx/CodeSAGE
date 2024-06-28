#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 goto VAR4;
VAR4:
 {
 int VAR5;
 int * VAR6 = new int[10];
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR6[VAR5] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN3(VAR6[VAR5]);
 }
 }
 else
 {
 FUN4("");
 }
 delete[] VAR6;
 }
}
#endif
