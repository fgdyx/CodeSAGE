#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = 10;
 {
 int VAR3;
 int VAR4[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN2(VAR4[VAR3]);
 }
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
