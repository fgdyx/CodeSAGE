#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3==5)
 {
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN2();
 }
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memmove(VAR5, VAR4, VAR2);
 VAR5[VAR2] = '';
 }
 FUN3(VAR5);
 }
}
#endif
