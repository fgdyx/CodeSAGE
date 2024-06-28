#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(5==5)
 {
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 wchar_t *VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 size_t VAR15 = wcslen(VAR2);
 do
 {
#ifdef VAR6
 if (FUN6(FUN7(2,2), &VAR7) != VAR16)
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
 VAR10.VAR24 = FUN8(VAR25);
 if (FUN9(VAR12, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN10(VAR12, VAR28) == VAR27)
 {
 break;
 }
 VAR14 = FUN11(VAR12, NULL, NULL);
 if (VAR14 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR14, (char *)(VAR2 + VAR15), sizeof(wchar_t) * (100 - VAR15 - 1), 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR9 / sizeof(wchar_t)] = VAR4'';
 VAR11 = FUN12(VAR2, VAR4'');
 if (VAR11)
 {
 *VAR11 = VAR4'';
 }
 VAR11 = FUN12(VAR2, VAR4'');
 if (VAR11)
 {
 *VAR11 = VAR4'';
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN13(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN13(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN14();
 }
#endif
 }
 }
 if(5!=5)
 {
 FUN15("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN16(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4"", VAR3);
 FUN4(VAR3);
 }
}
static void FUN17()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(5==5)
 {
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 wchar_t *VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 size_t VAR15 = wcslen(VAR2);
 do
 {
#ifdef VAR6
 if (FUN6(FUN7(2,2), &VAR7) != VAR16)
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
 VAR10.VAR24 = FUN8(VAR25);
 if (FUN9(VAR12, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN10(VAR12, VAR28) == VAR27)
 {
 break;
 }
 VAR14 = FUN11(VAR12, NULL, NULL);
 if (VAR14 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR14, (char *)(VAR2 + VAR15), sizeof(wchar_t) * (100 - VAR15 - 1), 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR9 / sizeof(wchar_t)] = VAR4'';
 VAR11 = FUN12(VAR2, VAR4'');
 if (VAR11)
 {
 *VAR11 = VAR4'';
 }
 VAR11 = FUN12(VAR2, VAR4'');
 if (VAR11)
 {
 *VAR11 = VAR4'';
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN13(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN13(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN14();
 }
#endif
 }
 }
 if(5==5)
 {
 FUN16(VAR2, VAR2);
 }
}
static void FUN18(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN19()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(5!=5)
 {
 FUN15("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(5==5)
 {
 FUN18(VAR2, VAR2);
 }
}
static void FUN20(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN21()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 if(5==5)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(5==5)
 {
 FUN20(VAR2, VAR2);
 }
}
void FUN22()
{
 FUN19();
 FUN21();
 FUN5();
 FUN17();
}
#endif
