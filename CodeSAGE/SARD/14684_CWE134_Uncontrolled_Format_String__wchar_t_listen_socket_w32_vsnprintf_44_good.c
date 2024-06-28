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
 void (*VAR6) (wchar_t *, ...) = VAR7;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 wcscpy(VAR2, VAR4"");
 FUN6(VAR2);
}
static void FUN7(wchar_t * VAR2, ...)
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
static void FUN8()
{
 wchar_t * VAR2;
 void (*VAR6) (wchar_t *, ...) = VAR9;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
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
 if (FUN9(FUN10(2,2), &VAR11) != VAR20)
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
 VAR14.VAR28 = FUN11(VAR29);
 if (FUN12(VAR16, (struct VAR30*)&VAR14, sizeof(VAR14)) == VAR31)
 {
 break;
 }
 if (FUN13(VAR16, VAR32) == VAR31)
 {
 break;
 }
 VAR18 = FUN14(VAR16, NULL, NULL);
 if (VAR18 == VAR31)
 {
 break;
 }
 VAR13 = recv(VAR18, (char *)(VAR2 + VAR19), sizeof(wchar_t) * (100 - VAR19 - 1), 0);
 if (VAR13 == VAR31 || VAR13 == 0)
 {
 break;
 }
 VAR2[VAR19 + VAR13 / sizeof(wchar_t)] = VAR4'';
 VAR15 = FUN15(VAR2, VAR4'');
 if (VAR15)
 {
 *VAR15 = VAR4'';
 }
 VAR15 = FUN15(VAR2, VAR4'');
 if (VAR15)
 {
 *VAR15 = VAR4'';
 }
 }
 while (0);
 if (VAR16 != VAR17)
 {
 FUN16(VAR16);
 }
 if (VAR18 != VAR17)
 {
 FUN16(VAR18);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN17();
 }
#endif
 }
 FUN6(VAR2);
}
void FUN18()
{
 FUN5();
 FUN8();
}
#endif
