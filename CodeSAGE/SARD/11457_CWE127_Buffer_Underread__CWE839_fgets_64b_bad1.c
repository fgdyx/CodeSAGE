#ifndef VAR1
void FUN1(void * VAR2)
{
 int * VAR3 = (int *)VAR2;
 int VAR4 = (*VAR3);
 {
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR4 < 10)
 {
 FUN2(VAR5[VAR4]);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
