#ifndef VAR1
void FUN1()
{
 short VAR2;
 short *VAR3 = &VAR2;
 short *VAR4 = &VAR2;
 VAR2 = 0;
 {
 short VAR2 = *VAR3;
 {
 char VAR5[VAR6] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR2 = (short)FUN2(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 *VAR3 = VAR2;
 }
 {
 short VAR2 = *VAR4;
 {
 char VAR7[100];
 char VAR8[100] = "";
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 strncpy(VAR8, VAR7, VAR2);
 VAR8[VAR2] = '';
 }
 FUN3(VAR8);
 }
 }
}
#endif
