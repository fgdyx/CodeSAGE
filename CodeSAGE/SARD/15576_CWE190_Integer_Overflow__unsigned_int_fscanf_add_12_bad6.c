#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 else
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 unsigned int VAR3 = VAR2 + 1;
 FUN3(VAR3);
 }
 }
 else
 {
 if (VAR2 < VAR4)
 {
 unsigned int VAR3 = VAR2 + 1;
 FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
