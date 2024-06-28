#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 }
 if(1)
 {
 {
 int VAR3;
 int * VAR4 = new int[10];
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN4("");
 }
 delete[] VAR4;
 }
 }
}
#endif
