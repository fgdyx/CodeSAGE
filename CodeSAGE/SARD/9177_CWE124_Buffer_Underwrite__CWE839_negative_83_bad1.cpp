#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR6 = -5;
}
VAR4::~FUN1()
{
 {
 int VAR7;
 int VAR8[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR6 < 10)
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
 }
}
}
#endif
