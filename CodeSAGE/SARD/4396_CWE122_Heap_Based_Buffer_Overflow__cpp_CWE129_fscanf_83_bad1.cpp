#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR6);
}
VAR4::~FUN1()
{
 {
 int VAR7;
 int * VAR8 = new int[10];
 for (VAR7 = 0; VAR7 < 10; VAR7++)
 {
 VAR8[VAR7] = 0;
 }
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR6 >= 0)
 {
 VAR8[VAR6] = 1;
 for(VAR7 = 0; VAR7 < 10; VAR7++)
 {
 FUN2(VAR8[VAR7]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR8;
 }
}
}
#endif
