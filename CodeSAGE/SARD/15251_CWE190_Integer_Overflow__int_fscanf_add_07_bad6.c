#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
 }
}
#endif
