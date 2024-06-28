#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 int VAR4[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR2 >= 0)
 {
 FUN2(VAR4[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN5();
 VAR3 = VAR2;
 FUN1();
}
#endif
