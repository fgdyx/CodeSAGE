#ifndef VAR1
void FUN1(char * VAR2)
{
 char VAR3 = *VAR2;
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR4 = VAR3 * VAR3;
 FUN2(VAR4);
 }
}
#endif
