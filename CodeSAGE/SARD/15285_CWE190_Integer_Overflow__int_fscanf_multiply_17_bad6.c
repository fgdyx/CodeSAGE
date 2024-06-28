#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if(VAR4 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
 }
}
#endif
