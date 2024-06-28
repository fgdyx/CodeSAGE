#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 short VAR3 = VAR2 + 1;
 FUN3(VAR3);
 }
 }
}
#endif
