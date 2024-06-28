#ifndef VAR1
static void FUN1()
{
 short VAR2 = VAR3;
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
 FUN2(VAR5);
 }
}
void FUN3()
{
 short VAR2;
 VAR2 = 0;
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN4();
 VAR3 = VAR2;
 FUN1();
}
#endif
