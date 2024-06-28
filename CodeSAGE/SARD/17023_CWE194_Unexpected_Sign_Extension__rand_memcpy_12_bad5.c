#ifndef VAR1
void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN3();
 }
 else
 {
 VAR2 = 100-1;
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
 memcpy(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN4(VAR4);
 }
}
#endif
