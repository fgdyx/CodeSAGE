#ifndef VAR1
void FUN1(short VAR2[])
{
 short VAR3 = VAR2[2];
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memmove(VAR5, VAR4, VAR3);
 VAR5[VAR3] = '';
 }
 FUN2(VAR5);
 }
}
#endif
