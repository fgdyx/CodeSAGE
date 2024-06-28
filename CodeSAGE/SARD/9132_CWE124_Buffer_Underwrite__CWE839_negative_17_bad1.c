#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Use an invalid index */
 VAR4 = -5;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 int VAR2;
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR4 < 10)
 {
 VAR5[VAR4] = 1;
 for(VAR2 = 0; VAR2 < 10; VAR2++)
 {
 FUN2(VAR5[VAR2]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
