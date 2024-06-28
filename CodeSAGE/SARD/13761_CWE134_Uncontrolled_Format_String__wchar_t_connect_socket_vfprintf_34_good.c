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
 CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_vfprintf_34_unionType VAR5;
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
 CWE134_Uncontrolled_Format_String__wchar_t_connect_socket_vfprintf_34_unionType VAR5;
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
 size_t VAR18 = wcslen(VAR2);
 do
 {
#ifdef VAR10
 if (FUN8(FUN9(2,2), &VAR11) != VAR19)
 {
 break;
 }
 VAR12 = 1;
#endif
 VAR16 = socket(VAR20, VAR21, VAR22);
 if (VAR16 == VAR17)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR23 = VAR20;
 VAR14.VAR24.VAR25 = FUN10(VAR26);
 VAR14.VAR27 = FUN11(VAR28);
 if (connect(VAR16, (struct VAR29*)&VAR14, sizeof(VAR14)) == VAR30)
 {
 break;
 }
 VAR13 = recv(VAR16, (char *)(VAR2 + VAR18), sizeof(wchar_t) * (100 - VAR18 - 1), 0);
 if (VAR13 == VAR30 || VAR13 == 0)
 {
 break;
 }
 VAR2[VAR18 + VAR13 / sizeof(wchar_t)] = VAR7'';
 VAR15 = FUN12(VAR2, VAR7'');
 if (VAR15)
 {
 *VAR15 = VAR7'';
 }
 VAR15 = FUN12(VAR2, VAR7'');
 if (VAR15)
 {
 *VAR15 = VAR7'';
 }
 }
 while (0);
 if (VAR16 != VAR17)
 {
 FUN13(VAR16);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN14();
 }
#endif
 }
 VAR5.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR5.VAR9;
 FUN6(VAR2, VAR2);
 }
}
void FUN15()
{
 FUN5();
 FUN7();
}
#endif
