#ifndef VAR1
#VAR2 ""
#VAR2 ""
#define FUN1 (3 * sizeof(VAR3) + 2)
namespace VAR4
{
VAR5::FUN2(int VAR6)
{
 VAR3 = VAR6;
 {
 char VAR7[VAR8] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR3 = FUN3(VAR7);
 }
 else
 {
 FUN4("");
 }
 }
}
VAR5::~FUN2()
{
 {
 int VAR9;
 int * VAR10 = new int[10];
 for (VAR9 = 0; VAR9 < 10; VAR9++)
 {
 VAR10[VAR9] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR3 >= 0)
 {
 VAR10[VAR3] = 1;
 for(VAR9 = 0; VAR9 < 10; VAR9++)
 {
 FUN5(VAR10[VAR9]);
 }
 }
 else
 {
 FUN4("");
 }
 delete[] VAR10;
 }
}
}
#endif
