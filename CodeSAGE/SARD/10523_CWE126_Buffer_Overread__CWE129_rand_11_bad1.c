#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN3();
 }
 if(FUN2())
 {
 {
 int VAR3[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR2 >= 0)
 {
 FUN4(VAR3[VAR2]);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
#endif
