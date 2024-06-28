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
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
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
 SOCKET VAR16 = VAR15;
 size_t VAR17 = wcslen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN6(FUN7(2,2), &VAR9) != VAR18)
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
 VAR12.VAR26 = FUN8(VAR27);
 if (FUN9(VAR14, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN10(VAR14, VAR30) == VAR29)
 {
 break;
 }
 VAR16 = FUN11(VAR14, NULL, NULL);
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
 if (VAR16 != VAR15)
 {
 FUN13(VAR16);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN14();
 }
#endif
 }
 }
 if(VAR31)
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
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 _vsnwprintf(VAR3, 100-1, VAR4"", VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
static void FUN17()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
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
 SOCKET VAR16 = VAR15;
 size_t VAR17 = wcslen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN6(FUN7(2,2), &VAR9) != VAR18)
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
 VAR12.VAR26 = FUN8(VAR27);
 if (FUN9(VAR14, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN10(VAR14, VAR30) == VAR29)
 {
 break;
 }
 VAR16 = FUN11(VAR14, NULL, NULL);
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
 if (VAR16 != VAR15)
 {
 FUN13(VAR16);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN14();
 }
#endif
 }
 }
 if(VAR7)
 {
 FUN16(VAR2, VAR2);
 }
}
static void FUN18(wchar_t * VAR2, ...)
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
static void FUN19()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(VAR31)
 {
 FUN15("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR7)
 {
 FUN18(VAR2, VAR2);
 }
}
static void FUN20(wchar_t * VAR2, ...)
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
static void FUN21()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(VAR7)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR7)
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
