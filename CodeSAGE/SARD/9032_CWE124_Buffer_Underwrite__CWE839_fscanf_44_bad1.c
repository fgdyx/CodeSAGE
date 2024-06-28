#ifndef VAR1
static void FUN1(int VAR2)
{
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
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 FUN5(VAR2);
}
#endif
