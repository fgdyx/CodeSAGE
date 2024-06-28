#ifndef VAR1
void FUN1(void * VAR2)
{
 char * VAR3 = (char *)VAR2;
 char VAR4 = (*VAR3);
 if(VAR4 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > CHAR_MAX, this will overflow */
 char VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
}
#endif
