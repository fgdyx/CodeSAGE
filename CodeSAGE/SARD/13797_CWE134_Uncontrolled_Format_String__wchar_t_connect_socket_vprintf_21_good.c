#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(wchar_t * VAR5, ...)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7"", VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN6()
{
 wchar_t * VAR5;
 wchar_t VAR8[100] = VAR7"";
 VAR5 = VAR8;
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 wchar_t *VAR14;
 SOCKET VAR15 = VAR16;
 size_t VAR17 = wcslen(VAR5);
 do
 {
#ifdef VAR9
 if (FUN7(FUN8(2,2), &VAR10) != VAR18)
 {
 break;
 }
 VAR11 = 1;
#endif
 VAR15 = socket(VAR19, VAR20, VAR21);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR22 = VAR19;
 VAR13.VAR23.VAR24 = FUN9(VAR25);
 VAR13.VAR26 = FUN10(VAR27);
 if (connect(VAR15, (struct VAR28*)&VAR13, sizeof(VAR13)) == VAR29)
 {
 break;
 }
 VAR12 = recv(VAR15, (char *)(VAR5 + VAR17), sizeof(wchar_t) * (100 - VAR17 - 1), 0);
 if (VAR12 == VAR29 || VAR12 == 0)
 {
 break;
 }
 VAR5[VAR17 + VAR12 / sizeof(wchar_t)] = VAR7'';
 VAR14 = FUN11(VAR5, VAR7'');
 if (VAR14)
 {
 *VAR14 = VAR7'';
 }
 VAR14 = FUN11(VAR5, VAR7'');
 if (VAR14)
 {
 *VAR14 = VAR7'';
 }
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN12(VAR15);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN13();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5, VAR5);
}
static void FUN14(wchar_t * VAR5, ...)
{
 if(VAR3)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR7"", VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN15()
{
 wchar_t * VAR5;
 wchar_t VAR8[100] = VAR7"";
 VAR5 = VAR8;
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 wchar_t *VAR14;
 SOCKET VAR15 = VAR16;
 size_t VAR17 = wcslen(VAR5);
 do
 {
#ifdef VAR9
 if (FUN7(FUN8(2,2), &VAR10) != VAR18)
 {
 break;
 }
 VAR11 = 1;
#endif
 VAR15 = socket(VAR19, VAR20, VAR21);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR22 = VAR19;
 VAR13.VAR23.VAR24 = FUN9(VAR25);
 VAR13.VAR26 = FUN10(VAR27);
 if (connect(VAR15, (struct VAR28*)&VAR13, sizeof(VAR13)) == VAR29)
 {
 break;
 }
 VAR12 = recv(VAR15, (char *)(VAR5 + VAR17), sizeof(wchar_t) * (100 - VAR17 - 1), 0);
 if (VAR12 == VAR29 || VAR12 == 0)
 {
 break;
 }
 VAR5[VAR17 + VAR12 / sizeof(wchar_t)] = VAR7'';
 VAR14 = FUN11(VAR5, VAR7'');
 if (VAR14)
 {
 *VAR14 = VAR7'';
 }
 VAR14 = FUN11(VAR5, VAR7'');
 if (VAR14)
 {
 *VAR14 = VAR7'';
 }
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN12(VAR15);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN13();
 }
#endif
 }
 VAR3 = 1;
 FUN14(VAR5, VAR5);
}
static void FUN16(wchar_t * VAR5, ...)
{
 if(VAR4)
 {
 {
 va_list VAR6;
 FUN3(VAR6, VAR5);
 FUN4(VAR5, VAR6);
 FUN5(VAR6);
 }
 }
}
static void FUN17()
{
 wchar_t * VAR5;
 wchar_t VAR8[100] = VAR7"";
 VAR5 = VAR8;
 wcscpy(VAR5, VAR7"");
 VAR4 = 1;
 FUN16(VAR5, VAR5);
}
void FUN18()
{
 FUN6();
 FUN15();
 FUN17();
}
#endif
