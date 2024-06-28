#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5)
{
 {
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR5 >= 0)
 {
 FUN2(VAR6[VAR5]);
 }
 else
 {
 FUN3("");
 }
 }
}
}
#endif
