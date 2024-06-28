#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int VAR3)
{
 if(VAR2)
 {
 {
 int VAR4[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR3 < 10)
 {
 FUN2(VAR4[VAR3]);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN4()
{
 int VAR3;
 VAR3 = -1;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR3 = FUN5(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
