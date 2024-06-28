#ifndef VAR1
static int FUN1(int VAR2)
{
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 return VAR2;
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
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
#endif
