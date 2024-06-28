#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 int VAR7;
 int * VAR8 = (int *)malloc(10 * sizeof(int));
 for (VAR7 = 0; VAR7 < 10; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
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
 free(VAR8);
 }
 }
}
#endif
