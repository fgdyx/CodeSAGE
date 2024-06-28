#ifndef VAR1
static void FUN1(int VAR2)
{
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
void FUN4()
{
 int VAR2;
 void (*VAR5) (int) = VAR6;
 VAR2 = -1;
 {
 char VAR7[VAR8] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = FUN5(VAR7);
 }
 else
 {
 FUN3("");
 }
 }
 FUN6(VAR2);
}
#endif
