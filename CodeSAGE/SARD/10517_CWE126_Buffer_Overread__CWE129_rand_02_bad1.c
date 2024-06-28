#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(1)
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 }
 if(1)
 {
 {
 int VAR3[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR2 >= 0)
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
#endif
