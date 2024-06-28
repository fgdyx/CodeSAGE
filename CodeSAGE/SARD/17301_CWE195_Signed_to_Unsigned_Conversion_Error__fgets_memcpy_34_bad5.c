#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE195_Signed_to_Unsigned_Conversion_Error__fgets_memcpy_34_unionType VAR3;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN2(VAR4);
 }
 else
 {
 FUN3("");
 }
 }
 VAR3.VAR6 = VAR2;
 {
 int VAR2 = VAR3.VAR7;
 {
 char VAR8[100];
 char VAR9[100] = "";
 memset(VAR8, '', 100-1);
 VAR8[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 memcpy(VAR9, VAR8, VAR2);
 VAR9[VAR2] = '';
 }
 FUN3(VAR9);
 }
 }
}
#endif
