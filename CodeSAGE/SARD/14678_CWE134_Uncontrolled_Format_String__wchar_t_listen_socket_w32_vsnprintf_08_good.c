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
 if(FUN6())
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
 SOCKET VAR15 = VAR14;
 size_t VAR16 = wcslen(VAR2);
 do
 {
#ifdef VAR7
 if (FUN7(FUN8(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN9(VAR26);
 if (FUN10(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN11(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN12(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR10 / sizeof(wchar_t)] = VAR4'';
 VAR12 = FUN13(VAR2, VAR4'');
 if (VAR12)
 {
 *VAR12 = VAR4'';
 }
 VAR12 = FUN13(VAR2, VAR4'');
 if (VAR12)
 {
 *VAR12 = VAR4'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN14(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN14(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN15();
 }
#endif
 }
 }
 if(FUN16())
 {
 FUN17("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN18(wchar_t * VAR2, ...)
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
static void FUN19()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(FUN6())
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
 SOCKET VAR15 = VAR14;
 size_t VAR16 = wcslen(VAR2);
 do
 {
#ifdef VAR7
 if (FUN7(FUN8(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN9(VAR26);
 if (FUN10(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN11(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN12(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR10 / sizeof(wchar_t)] = VAR4'';
 VAR12 = FUN13(VAR2, VAR4'');
 if (VAR12)
 {
 *VAR12 = VAR4'';
 }
 VAR12 = FUN13(VAR2, VAR4'');
 if (VAR12)
 {
 *VAR12 = VAR4'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN14(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN14(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN15();
 }
#endif
 }
 }
 if(FUN6())
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
 if(FUN16())
 {
 FUN17("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN6())
 {
 FUN20(VAR2, VAR2);
 }
}
static void FUN22(wchar_t * VAR2, ...)
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
static void FUN23()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 if(FUN6())
 {
 wcscpy(VAR2, VAR4"");
 }
 if(FUN6())
 {
 FUN22(VAR2, VAR2);
 }
}
void FUN24()
{
 FUN21();
 FUN23();
 FUN5();
 FUN19();
}
#endif
