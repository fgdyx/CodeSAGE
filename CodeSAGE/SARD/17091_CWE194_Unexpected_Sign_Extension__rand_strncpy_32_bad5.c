#ifndef VAR1
void FUN1()
{
 short VAR2;
 short *VAR3 = &VAR2;
 short *VAR4 = &VAR2;
 VAR2 = 0;
 {
 short VAR2 = *VAR3;
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN2();
 *VAR3 = VAR2;
 }
 {
 short VAR2 = *VAR4;
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 strncpy(VAR6, VAR5, VAR2);
 VAR6[VAR2] = '';
 }
 FUN3(VAR6);
 }
 }
}
#endif
