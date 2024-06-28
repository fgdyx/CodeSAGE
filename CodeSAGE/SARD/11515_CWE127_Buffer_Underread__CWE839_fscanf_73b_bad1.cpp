#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3.FUN2();
 {
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR4 < 10)
 {
 FUN3(VAR5[VAR4]);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
