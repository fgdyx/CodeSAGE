#ifndef VAR1
void FUN1(VAR2<int, int> VAR3)
{
 int VAR4 = VAR3[2];
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR4 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 memmove(VAR6, VAR5, VAR4);
 VAR6[VAR4] = '';
 }
 FUN2(VAR6);
 }
}
#endif
