#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 int VAR2;
 int * VAR5 = (int *)malloc(10 * sizeof(int));
 for (VAR2 = 0; VAR2 < 10; VAR2++)
 {
 VAR5[VAR2] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR4 >= 0)
 {
 VAR5[VAR4] = 1;
 for(VAR2 = 0; VAR2 < 10; VAR2++)
 {
 FUN2(VAR5[VAR2]);
 }
 }
 else
 {
 FUN3("");
 }
 free(VAR5);
 }
 }
}
#endif
