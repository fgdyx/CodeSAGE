#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3)
 {
 {
 /* POTENTIAL FLAW: Subtracting 1 from data could cause an underflow */
 int VAR4 = VAR2 - 1;
 FUN2(VAR4);
 }
 }
}
#endif
