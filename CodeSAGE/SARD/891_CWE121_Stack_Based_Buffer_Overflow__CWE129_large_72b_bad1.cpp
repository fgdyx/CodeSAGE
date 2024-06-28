#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 int VAR5;
 int VAR6[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to write to an index of the array that is above the upper bound
 * This code does check to see if the array index is negative */
 if (VAR4 >= 0)
 {
 VAR6[VAR4] = 1;
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
