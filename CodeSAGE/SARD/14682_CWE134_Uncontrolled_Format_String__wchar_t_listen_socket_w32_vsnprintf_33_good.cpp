#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t * &VAR6 = VAR2;
 wchar_t VAR7[100] = VAR4"";
 VAR2 = VAR7;
 wcscpy(VAR2, VAR4"");
 {
 wchar_t * VAR2 = VAR6;
 FUN1(VAR2, VAR2);
 }
}
static void FUN6(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR4"", VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t * &VAR6 = VAR2;
 wchar_t VAR7[100] = VAR4"";
 VAR2 = VAR7;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 SOCKET VAR16 = VAR15;
 size_t VAR17 = wcslen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN8(FUN9(2,2), &VAR9) != VAR18)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR14 = socket(VAR19, VAR20, VAR21);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN10(VAR27);
 if (FUN11(VAR14, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN12(VAR14, VAR30) == VAR29)
 {
 break;
 }
 VAR16 = FUN13(VAR14, NULL, NULL);
 if (VAR16 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR16, (char *)(VAR2 + VAR17), sizeof(wchar_t) * (100 - VAR17 - 1), 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR17 + VAR11 / sizeof(wchar_t)] = VAR4'';
 VAR13 = FUN14(VAR2, VAR4'');
 if (VAR13)
 {
 *VAR13 = VAR4'';
 }
 VAR13 = FUN14(VAR2, VAR4'');
 if (VAR13)
 {
 *VAR13 = VAR4'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN15(VAR14);
 }
 if (VAR16 != VAR15)
 {
 FUN15(VAR16);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN16();
 }
#endif
 }
 {
 wchar_t * VAR2 = VAR6;
 FUN6(VAR2, VAR2);
 }
}
void FUN17()
{
 FUN5();
 FUN7();
}
#endif
