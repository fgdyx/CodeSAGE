#ifndef VAR1
void FUN1(int VAR2)
{
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 strncpy(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN2(VAR4);
 }
}
#endif
