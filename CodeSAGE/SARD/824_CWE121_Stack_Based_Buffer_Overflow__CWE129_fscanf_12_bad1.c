#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 else
 {
 VAR2 = 7;
 }
 if(FUN2())
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
 FUN3(VAR4[VAR3]);
 }
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
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
}
#endif
