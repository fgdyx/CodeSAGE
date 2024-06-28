#ifndef VAR1
void FUN1(CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 {
 char VAR5[100];
 char VAR6[100] = "";
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 memcpy(VAR6, VAR5, VAR3);
 VAR6[VAR3] = '';
 }
 FUN2(VAR6);
 }
}
#endif
