#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 {
 int VAR3 = VAR2;
 int VAR2 = VAR3;
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 }
}
#endif
