#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 {
 char VAR3[VAR4] = "";
 /* FLAW: Use a value input from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (short)FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR6, VAR5, VAR2);
 VAR6[VAR2] = '';
 }
 FUN3(VAR6);
 }
}
#endif
