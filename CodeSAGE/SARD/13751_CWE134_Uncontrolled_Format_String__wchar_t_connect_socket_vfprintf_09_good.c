#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(VAR7)
 {
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
 if (FUN6(FUN7(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN8(VAR24);
 VAR12.VAR25 = FUN9(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR11 / sizeof(wchar_t)] = VAR5'';
 VAR13 = FUN10(VAR2, VAR5'');
 if (VAR13)
 {
 *VAR13 = VAR5'';
 }
 VAR13 = FUN10(VAR2, VAR5'');
 if (VAR13)
 {
 *VAR13 = VAR5'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN11(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN12();
 }
#endif
 }
 }
 if(VAR29)
 {
 FUN13("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN14(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN15()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(VAR7)
 {
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
 if (FUN6(FUN7(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN8(VAR24);
 VAR12.VAR25 = FUN9(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR11 / sizeof(wchar_t)] = VAR5'';
 VAR13 = FUN10(VAR2, VAR5'');
 if (VAR13)
 {
 *VAR13 = VAR5'';
 }
 VAR13 = FUN10(VAR2, VAR5'');
 if (VAR13)
 {
 *VAR13 = VAR5'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN11(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN12();
 }
#endif
 }
 }
 if(VAR7)
 {
 FUN14(VAR2, VAR2);
 }
}
static void FUN16(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN17()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(VAR29)
 {
 FUN13("");
 }
 else
 {
 wcscpy(VAR2, VAR5"");
 }
 if(VAR7)
 {
 FUN16(VAR2, VAR2);
 }
}
static void FUN18(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN19()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(VAR7)
 {
 wcscpy(VAR2, VAR5"");
 }
 if(VAR7)
 {
 FUN18(VAR2, VAR2);
 }
}
void FUN20()
{
 FUN17();
 FUN19();
 FUN5();
 FUN15();
}
#endif
