#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
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
 char VAR3[100];
 char VAR6[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR6, VAR3, VAR2);
 VAR6[VAR2] = '';
 }
 FUN3(VAR6);
 }
}
#endif
