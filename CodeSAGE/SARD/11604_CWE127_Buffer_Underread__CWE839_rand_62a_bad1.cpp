#ifndef VAR1
void FUN1(int &VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 int VAR3[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 FUN3(VAR3[VAR2]);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
