#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = -5;
 }
 if(VAR3)
 {
 {
 int VAR4[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 FUN2(VAR4[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
