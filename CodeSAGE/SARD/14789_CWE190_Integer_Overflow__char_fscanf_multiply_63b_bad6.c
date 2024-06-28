#ifndef VAR1
void FUN1(char * VAR2)
{
 char VAR3 = *VAR2;
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
 char VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
}
#endif
