#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 short VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Use a value input from the console */
 fscanf (stdin, "", &VAR4);
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > SHRT_MAX, this will overflow */
 short VAR5 = VAR4 * VAR4;
 FUN2(VAR5);
 }
 }
}
#endif
