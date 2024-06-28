#ifndef VAR1
void FUN1()
{
 int VAR2 = VAR3;
 {
 int VAR4;
 int * VAR5 = (int *)malloc(10 * sizeof(int));
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN2(VAR5[VAR4]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR5);
 }
}
#endif
