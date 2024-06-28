#ifndef VAR1
void FUN1()
{
 int VAR2;
 CWE195_Signed_to_Unsigned_Conversion_Error__connect_socket_memmove_34_unionType VAR3;
 VAR2 = -1;
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 char VAR11[VAR12];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR9 = socket(VAR14, VAR15, VAR16);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN4(VAR20);
 VAR8.VAR21 = FUN5(VAR22);
 if (connect(VAR9, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR9, VAR11, VAR12 - 1, 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR11[VAR7] = '';
 VAR2 = FUN6(VAR11);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN7(VAR9);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN8();
 }
#endif
 }
 VAR3.VAR25 = VAR2;
 {
 int VAR2 = VAR3.VAR26;
 {
 char VAR27[100];
 char VAR28[100] = "";
 memset(VAR27, '', 100-1);
 VAR27[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign conversion could result in a very large number */
 memmove(VAR28, VAR27, VAR2);
 VAR28[VAR2] = '';
 }
 FUN9(VAR28);
 }
 }
}
#endif
