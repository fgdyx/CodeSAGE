#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(1)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(1)
 {
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 unsigned int VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
 }
}
#endif
