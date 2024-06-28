#ifndef VAR1
void FUN1(int * VAR2)
{
 int VAR3 = *VAR2;
 {
 int VAR4[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR3 >= 0)
 {
 FUN2(VAR4[VAR3]);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
