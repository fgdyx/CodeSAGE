#ifndef VAR1
void FUN1(VAR2<char> VAR3)
{
 char VAR4 = VAR3.FUN2();
 {
 /* POTENTIAL FLAW: if (data*data) > CHAR_MAX, this will overflow */
 char VAR5 = VAR4 * VAR4;
 FUN3(VAR5);
 }
}
#endif
