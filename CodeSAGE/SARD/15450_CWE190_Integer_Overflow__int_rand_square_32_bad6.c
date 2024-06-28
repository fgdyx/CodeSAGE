#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = 0;
 {
 int VAR2 = *VAR3;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: if (data*data) > INT_MAX, this will overflow */
 int VAR5 = VAR2 * VAR2;
 FUN3(VAR5);
 }
 }
}
#endif
