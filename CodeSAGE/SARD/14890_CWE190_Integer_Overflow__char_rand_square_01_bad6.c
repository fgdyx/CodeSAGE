#ifndef VAR1
void FUN1()
{
 char VAR2;
 VAR2 = '';
 /* POTENTIAL FLAW: Use a random value */
 VAR2 = (char)FUN2();
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR3 = VAR2 * VAR2;
 FUN3(VAR3);
 }
}
#endif
