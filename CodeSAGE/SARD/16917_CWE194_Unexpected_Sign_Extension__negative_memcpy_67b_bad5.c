#ifndef VAR1
void FUN1(CWE194_Unexpected_Sign_Extension__negative_memcpy_67_structType VAR2)
{
 short VAR3 = VAR2.VAR4;
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR6, VAR5, VAR3);
 VAR6[VAR3] = '';
 }
 FUN2(VAR6);
 }
}
#endif
