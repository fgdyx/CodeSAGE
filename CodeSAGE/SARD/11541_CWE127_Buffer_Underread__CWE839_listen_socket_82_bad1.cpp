#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
void VAR4::FUN1(int VAR5)
{
 {
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR5 < 10)
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
