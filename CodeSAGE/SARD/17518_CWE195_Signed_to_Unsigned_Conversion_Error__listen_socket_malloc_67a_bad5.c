#ifndef VAR1
void FUN1(CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType VAR2);
void FUN2()
{
 int VAR3;
 CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_67_structType VAR2;
 VAR3 = -1;
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 SOCKET VAR11 = VAR10;
 char VAR12[VAR13];
 do
 {
#ifdef VAR4
 if (FUN3(FUN4(2,2), &VAR5) != VAR14)
 {
 break;
 }
 VAR6 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR9 = socket(VAR15, VAR16, VAR17);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR18 = VAR15;
 VAR8.VAR19.VAR20 = VAR21;
 VAR8.VAR22 = FUN5(VAR23);
 if (FUN6(VAR9, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
 {
 break;
 }
 if (FUN7(VAR9, VAR26) == VAR25)
 {
 break;
 }
 VAR11 = FUN8(VAR9, NULL, NULL);
 if (VAR11 == VAR25)
 {
 break;
 }
 VAR7 = recv(VAR11, VAR12, VAR13 - 1, 0);
 if (VAR7 == VAR25 || VAR7 == 0)
 {
 break;
 }
 VAR12[VAR7] = '';
 VAR3 = FUN9(VAR12);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN10(VAR9);
 }
 if (VAR11 != VAR10)
 {
 FUN10(VAR11);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN11();
 }
#endif
 }
 VAR2.VAR27 = VAR3;
 FUN1(VAR2);
}
#endif
