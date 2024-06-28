#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 goto VAR4;
VAR4:
 {
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR2 >= 0)
 {
 FUN3(VAR5[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
