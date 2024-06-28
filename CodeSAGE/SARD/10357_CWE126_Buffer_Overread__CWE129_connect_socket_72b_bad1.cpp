#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR4 >= 0)
 {
 FUN2(VAR5[VAR4]);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
