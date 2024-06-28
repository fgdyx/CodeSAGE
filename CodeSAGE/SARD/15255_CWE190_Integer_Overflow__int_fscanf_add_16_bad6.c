#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 while(1)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 break;
 }
 while(1)
 {
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR3 = VAR2 + 1;
 FUN2(VAR3);
 }
 break;
 }
}
#endif
