#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
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
static void FUN5()
{
 int VAR6,VAR7;
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 wchar_t *VAR14;
 SOCKET VAR15 = VAR16;
 SOCKET VAR17 = VAR16;
 size_t VAR18 = wcslen(VAR2);
 do
 {
#ifdef VAR9
 if (FUN6(FUN7(2,2), &VAR10) != VAR19)
 {
 break;
 }
 VAR11 = 1;
#endif
 VAR15 = socket(VAR20, VAR21, VAR22);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR23 = VAR20;
 VAR13.VAR24.VAR25 = VAR26;
 VAR13.VAR27 = FUN8(VAR28);
 if (FUN9(VAR15, (struct VAR29*)&VAR13, sizeof(VAR13)) == VAR30)
 {
 break;
 }
 if (FUN10(VAR15, VAR31) == VAR30)
 {
 break;
 }
 VAR17 = FUN11(VAR15, NULL, NULL);
 if (VAR17 == VAR30)
 {
 break;
 }
 VAR12 = recv(VAR17, (char *)(VAR2 + VAR18), sizeof(wchar_t) * (100 - VAR18 - 1), 0);
 if (VAR12 == VAR30 || VAR12 == 0)
 {
 break;
 }
 VAR2[VAR18 + VAR12 / sizeof(wchar_t)] = VAR4'';
 VAR14 = FUN12(VAR2, VAR4'');
 if (VAR14)
 {
 *VAR14 = VAR4'';
 }
 VAR14 = FUN12(VAR2, VAR4'');
 if (VAR14)
 {
 *VAR14 = VAR4'';
 }
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN13(VAR15);
 }
 if (VAR17 != VAR16)
 {
 FUN13(VAR17);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN14();
 }
#endif
 }
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN15(wchar_t * VAR2, ...)
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
static void FUN16()
{
 int VAR32,VAR33;
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 for(VAR32 = 0; VAR32 < 1; VAR32++)
 {
 wcscpy(VAR2, VAR4"");
 }
 for(VAR33 = 0; VAR33 < 1; VAR33++)
 {
 FUN15(VAR2, VAR2);
 }
}
void FUN17()
{
 FUN16();
 FUN5();
}
#endif
