#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3)
 {
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 unsigned int VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 }
}
#endif
