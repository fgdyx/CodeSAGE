#ifndef VAR1
void FUN1()
{
 short VAR2;
 CWE194_Unexpected_Sign_Extension__rand_strncpy_34_unionType VAR3;
 VAR2 = 0;
 /* FLAW: Use a random value that could be less than 0 */
 VAR2 = (short)FUN2();
 VAR3.VAR4 = VAR2;
 {
 short VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 char VAR7[100] = "";
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 strncpy(VAR7, VAR6, VAR2);
 VAR7[VAR2] = '';
 }
 FUN3(VAR7);
 }
 }
}
#endif
