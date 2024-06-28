#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(int VAR5)
{
 VAR6 = VAR5;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR6 = FUN2();
}
VAR4::~FUN1()
{
 {
 int VAR7[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR6 < 10)
 {
 FUN3(VAR7[VAR6]);
 }
 else
 {
 FUN4("");
 }
 }
}
}
#endif
