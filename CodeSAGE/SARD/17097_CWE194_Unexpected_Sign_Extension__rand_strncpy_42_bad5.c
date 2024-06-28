#ifndef VAR1
static short FUN1(short VAR2)
{
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN2();
 return VAR2;
}
void FUN3()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 strncpy(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN4(VAR4);
 }
}
#endif
