#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_vfprintf_34_unionType VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 wcscpy(VAR2, VAR7"");
 VAR5.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR5.VAR9;
 FUN1(VAR2, VAR2);
 }
}
static void FUN6(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR7"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 CWE134_Uncontrolled_Format_String__wchar_t_listen_socket_vfprintf_34_unionType VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 {
#ifdef VAR10
 WSADATA VAR11;
 int VAR12 = 0;
#endif
 int VAR13;
 struct sockaddr_in VAR14;
 wchar_t *VAR15;
 SOCKET VAR16 = VAR17;
 SOCKET VAR18 = VAR17;
 size_t VAR19 = wcslen(VAR2);
 do
 {
#ifdef VAR10
 if (FUN8(FUN9(2,2), &VAR11) != VAR20)
 {
 break;
 }
 VAR12 = 1;
#endif
 VAR16 = socket(VAR21, VAR22, VAR23);
 if (VAR16 == VAR17)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR24 = VAR21;
 VAR14.VAR25.VAR26 = VAR27;
 VAR14.VAR28 = FUN10(VAR29);
 if (FUN11(VAR16, (struct VAR30*)&VAR14, sizeof(VAR14)) == VAR31)
 {
 break;
 }
 if (FUN12(VAR16, VAR32) == VAR31)
 {
 break;
 }
 VAR18 = FUN13(VAR16, NULL, NULL);
 if (VAR18 == VAR31)
 {
 break;
 }
 VAR13 = recv(VAR18, (char *)(VAR2 + VAR19), sizeof(wchar_t) * (100 - VAR19 - 1), 0);
 if (VAR13 == VAR31 || VAR13 == 0)
 {
 break;
 }
 VAR2[VAR19 + VAR13 / sizeof(wchar_t)] = VAR7'';
 VAR15 = FUN14(VAR2, VAR7'');
 if (VAR15)
 {
 *VAR15 = VAR7'';
 }
 VAR15 = FUN14(VAR2, VAR7'');
 if (VAR15)
 {
 *VAR15 = VAR7'';
 }
 }
 while (0);
 if (VAR16 != VAR17)
 {
 FUN15(VAR16);
 }
 if (VAR18 != VAR17)
 {
 FUN15(VAR18);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN16();
 }
#endif
 }
 VAR5.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR5.VAR9;
 FUN6(VAR2, VAR2);
 }
}
void FUN17()
{
 FUN5();
 FUN7();
}
#endif
