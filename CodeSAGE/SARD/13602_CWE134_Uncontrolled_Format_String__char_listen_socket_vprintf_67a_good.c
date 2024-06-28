#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 strcpy(VAR3, "");
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_67_structType VAR2);
static void FUN4()
{
 char * VAR3;
 CWE134_Uncontrolled_Format_String__char_listen_socket_vprintf_67_structType VAR2;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 char *VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 size_t VAR15 = strlen(VAR3);
 do
 {
#ifdef VAR6
 if (FUN5(FUN6(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR12 = socket(VAR17, VAR18, VAR19);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN7(VAR25);
 if (FUN8(VAR12, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN9(VAR12, VAR28) == VAR27)
 {
 break;
 }
 VAR14 = FUN10(VAR12, NULL, NULL);
 if (VAR14 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR14, (char *)(VAR3 + VAR15), sizeof(char) * (100 - VAR15 - 1), 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR3[VAR15 + VAR9 / sizeof(char)] = '';
 VAR11 = strchr(VAR3, '');
 if (VAR11)
 {
 *VAR11 = '';
 }
 VAR11 = strchr(VAR3, '');
 if (VAR11)
 {
 *VAR11 = '';
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN11(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN11(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN12();
 }
#endif
 }
 VAR2.VAR5 = VAR3;
 FUN3(VAR2);
}
void FUN13()
{
 FUN2();
 FUN4();
}
#endif
