#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 int VAR2 = *VAR3;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: Adding 1 to data could cause an overflow */
 int VAR5 = VAR2 + 1;
 FUN2(VAR5);
 }
 }
}
#endif
