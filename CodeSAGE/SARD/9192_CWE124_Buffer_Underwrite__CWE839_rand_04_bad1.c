#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 }
 if(VAR3)
 {
 {
 int VAR4;
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN3(VAR5[VAR4]);
 }
 }
 else
 {
 FUN4("");
 }
 }
 }
}
#endif
