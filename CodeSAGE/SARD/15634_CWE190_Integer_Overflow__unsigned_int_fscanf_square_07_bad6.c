#ifndef VAR1
void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3==5)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > UINT_MAX, this will overflow */
 unsigned int VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 }
}
#endif
