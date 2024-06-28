#ifndef VAR1
void FUN1(int * VAR2)
{
 int VAR3 = *VAR2;
 {
 int VAR4[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR3 < 10)
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
