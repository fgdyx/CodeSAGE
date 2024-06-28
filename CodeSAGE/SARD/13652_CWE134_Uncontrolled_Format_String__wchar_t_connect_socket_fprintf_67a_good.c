#ifndef VAR1
void FUN1(CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_fprintf_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_fprintf_67_structType VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_fprintf_67_structType VAR2);
static void FUN4()
{
 wchar_t * VAR3;
 CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_fprintf_67_structType VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 wchar_t *VAR12;
 SOCKET VAR13 = VAR14;
 size_t VAR15 = wcslen(VAR3);
 do
 {
#ifdef VAR7
 if (FUN5(FUN6(2,2), &VAR8) != VAR16)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR17, VAR18, VAR19);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN7(VAR23);
 VAR11.VAR24 = FUN8(VAR25);
 if (connect(VAR13, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR13, (char *)(VAR3 + VAR15), sizeof(wchar_t) * (100 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR3[VAR15 + VAR10 / sizeof(wchar_t)] = VAR5'';
 VAR12 = FUN9(VAR3, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 VAR12 = FUN9(VAR3, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN10(VAR13);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN11();
 }
#endif
 }
 VAR2.VAR6 = VAR3;
 FUN3(VAR2);
}
void FUN12()
{
 FUN2();
 FUN4();
}
#endif
