#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 int VAR5[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array*/
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
