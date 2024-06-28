#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE195_Signed_to_Unsigned_Conversion_Error__rand_memcpy_34_unionType VAR3;
 VAR2 = -1;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR2 = FUN2();
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 char VAR7[100] = "";
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 memcpy(VAR7, VAR6, VAR2);
 VAR7[VAR2] = '';
 }
 FUN3(VAR7);
 }
 }
}
#endif
