#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 FUN1(VAR2);
}
#endif
