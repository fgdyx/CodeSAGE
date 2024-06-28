#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = -5;
 goto VAR4;
VAR4:
 {
 int VAR5;
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 VAR6[VAR2] = 1;
 for(VAR5 = 0; VAR5 < 10; VAR5++)
 {
 FUN2(VAR6[VAR5]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
