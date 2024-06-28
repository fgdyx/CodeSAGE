#ifndef VAR1
char FUN1(char VAR2);
void FUN2()
{
 char VAR2;
 VAR2 = '';
 VAR2 = FUN1(VAR2);
 if(VAR2 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
 char VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
}
#endif
