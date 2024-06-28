#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR6 = 10;
}
VAR4::~FUN1()
{
 {
 int VAR7[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR6 >= 0)
 {
 FUN2(VAR7[VAR6]);
 }
 else
 {
 FUN3("");
 }
 }
}
}
#endif
