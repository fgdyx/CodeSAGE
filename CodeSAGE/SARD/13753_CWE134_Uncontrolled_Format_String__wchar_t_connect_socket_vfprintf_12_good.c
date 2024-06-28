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
static void FUN5(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR5"";
 VAR2 = VAR6;
 if(FUN7())
 {
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 wchar_t *VAR12;
 SOCKET VAR13 = VAR14;
 size_t VAR15 = wcslen(VAR2);
 do
 {
#ifdef VAR7
 if (FUN8(FUN9(2,2), &VAR8) != VAR16)
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
 VAR11.VAR21.VAR22 = FUN10(VAR23);
 VAR11.VAR24 = FUN11(VAR25);
 if (connect(VAR13, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR13, (char *)(VAR2 + VAR15), sizeof(wchar_t) * (100 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR10 / sizeof(wchar_t)] = VAR5'';
 VAR12 = FUN12(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 VAR12 = FUN12(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN13(VAR13);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN14();
 }
#endif
 }
 }
 else
 {
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 wchar_t *VAR12;
 SOCKET VAR13 = VAR14;
 size_t VAR15 = wcslen(VAR2);
 do
 {
#ifdef VAR7
 if (FUN8(FUN9(2,2), &VAR8) != VAR16)
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
 VAR11.VAR21.VAR22 = FUN10(VAR23);
 VAR11.VAR24 = FUN11(VAR25);
 if (connect(VAR13, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR13, (char *)(VAR2 + VAR15), sizeof(wchar_t) * (100 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR10 / sizeof(wchar_t)] = VAR5'';
 VAR12 = FUN12(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 VAR12 = FUN12(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN13(VAR13);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN14();
 }
#endif
 }
 }
 if(FUN7())
 {
 FUN5(VAR2, VAR2);
 }
 else
 {
 FUN5(VAR2, VAR2);
 }
}
static void FUN15(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR5"", VAR3);
 FUN4(VAR3);
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
 if(FUN7())
 {
 wcscpy(VAR2, VAR5"");
 }
 else
 {
 wcscpy(VAR2, VAR5"");
 }
 if(FUN7())
 {
 FUN16(VAR2, VAR2);
 }
 else
 {
 FUN16(VAR2, VAR2);
 }
}
void FUN18()
{
 FUN17();
 FUN6();
}
#endif
