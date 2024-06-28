#ifndef VAR1
void FUN1()
{
 short VAR2;
 short &VAR3 = VAR2;
 VAR2 = 0;
 {
 char VAR4[VAR5] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = (short)FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 {
 short VAR2 = VAR3;
 {
 char VAR6[100];
 char VAR7[100] = "";
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memmove(VAR7, VAR6, VAR2);
 VAR7[VAR2] = '';
 }
 FUN3(VAR7);
 }
 }
}
#endif
