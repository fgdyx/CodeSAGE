#ifndef VAR1
void FUN1()
{
 char VAR2;
 char *VAR3 = &VAR2;
 char *VAR4 = &VAR2;
 VAR2 = '';
 {
 char VAR2 = *VAR3;
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (char)FUN2();
 *VAR3 = VAR2;
 }
 {
 char VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR5 = VAR2 * VAR2;
 FUN3(VAR5);
 }
 }
}
#endif
