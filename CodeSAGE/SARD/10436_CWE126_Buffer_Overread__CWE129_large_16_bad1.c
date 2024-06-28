#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 while(1)
 {
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = 10;
 break;
 }
 while(1)
 {
 {
 int VAR3[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access an index of the array that is above the upper bound
 * This check does not check the upper bounds of the array index */
 if (VAR2 >= 0)
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 }
}
#endif
