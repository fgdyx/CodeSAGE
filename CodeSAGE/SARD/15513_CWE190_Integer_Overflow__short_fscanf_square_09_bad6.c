#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 }
}
#endif
