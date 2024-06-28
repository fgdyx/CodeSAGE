#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* POTENTIAL FLAW: Read data from the console using fscanf() */
 fscanf(stdin, "", &VAR2);
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
 }
}
#endif
