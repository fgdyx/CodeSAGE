#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* POTENTIAL FLAW: Use the maximum value for this type */
 VAR4 = VAR5;
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR6 = VAR4 * VAR4;
 FUN2(VAR6);
 }
 }
}
#endif
