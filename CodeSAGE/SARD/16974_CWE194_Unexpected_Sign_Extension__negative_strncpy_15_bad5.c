#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 switch(6)
 {
 case 6:
 /* FLAW: Use a negative number */
 VAR2 = -1;
 break;
 default:
 FUN2("");
 break;
 }
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
#endif
