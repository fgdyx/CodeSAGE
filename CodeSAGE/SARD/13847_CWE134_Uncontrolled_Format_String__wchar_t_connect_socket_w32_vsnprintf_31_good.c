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
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 wcscpy(VAR2, VAR4"");
 {
 wchar_t * VAR7 = VAR2;
 wchar_t * VAR2 = VAR7;
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
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 size_t VAR16 = wcslen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN8(FUN9(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR14 = socket(VAR18, VAR19, VAR20);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN10(VAR24);
 VAR12.VAR25 = FUN11(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR11 / sizeof(wchar_t)] = VAR4'';
 VAR13 = FUN12(VAR2, VAR4'');
 if (VAR13)
 {
 *VAR13 = VAR4'';
 }
 VAR13 = FUN12(VAR2, VAR4'');
 if (VAR13)
 {
 *VAR13 = VAR4'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN13(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN14();
 }
#endif
 }
 {
 wchar_t * VAR7 = VAR2;
 wchar_t * VAR2 = VAR7;
 FUN6(VAR2, VAR2);
 }
}
void FUN15()
{
 FUN5();
 FUN7();
}
#endif
