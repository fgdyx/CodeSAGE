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
 if(VAR2 < 0)
 {
 /* POTENTIAL FLAW: if (data * 2) < INT_MIN, this will underflow */
 int VAR5 = VAR2 * 2;
 FUN2(VAR5);
 }
 }
}
#endif
