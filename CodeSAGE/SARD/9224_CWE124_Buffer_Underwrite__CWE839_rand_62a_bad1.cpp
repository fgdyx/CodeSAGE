#ifndef VAR1
void FUN1(int &VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 {
 int VAR3;
 int VAR4[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This code does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
