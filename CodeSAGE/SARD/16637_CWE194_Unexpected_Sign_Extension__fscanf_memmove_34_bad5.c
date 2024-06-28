#ifndef VAR1
void FUN1()
{
 short VAR2;
 CWE194_Unexpected_Sign_Extension__fscanf_memmove_34_unionType VAR3;
 VAR2 = 0;
 /* FLAW: Use a value input from the console using fscanf() */
 fscanf (stdin, "", &VAR2);
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
 memmove(VAR7, VAR6, VAR2);
 VAR7[VAR2] = '';
 }
 FUN2(VAR7);
 }
 }
}
#endif
