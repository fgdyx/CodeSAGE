#ifndef VAR1
static void FUN1(short VAR2)
{
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
 FUN2(VAR4);
 }
}
void FUN3()
{
 short VAR2;
 void (*VAR5) (short) = VAR6;
 VAR2 = 0;
 {
 char VAR7[VAR8] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR7, VAR8, stdin) != NULL)
 {
 VAR2 = (short)FUN4(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 FUN5(VAR2);
}
#endif
