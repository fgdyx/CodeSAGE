#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(wchar_t * VAR5);
static void FUN2()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 size_t VAR16 = wcslen(VAR5);
 do
 {
#ifdef VAR8
 if (FUN3(FUN4(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN5(VAR24);
 VAR12.VAR25 = FUN6(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR5 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR5[VAR16 + VAR11 / sizeof(wchar_t)] = VAR7'';
 VAR13 = FUN7(VAR5, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 VAR13 = FUN7(VAR5, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN8(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN9();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN10(wchar_t * VAR5);
static void FUN11()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 size_t VAR16 = wcslen(VAR5);
 do
 {
#ifdef VAR8
 if (FUN3(FUN4(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN5(VAR24);
 VAR12.VAR25 = FUN6(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR5 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR5[VAR16 + VAR11 / sizeof(wchar_t)] = VAR7'';
 VAR13 = FUN7(VAR5, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 VAR13 = FUN7(VAR5, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN8(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN9();
 }
#endif
 }
 VAR3 = 1;
 FUN10(VAR5);
}
void FUN12(wchar_t * VAR5);
static void FUN13()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 wcscpy(VAR5, VAR7"");
 VAR4 = 1;
 FUN12(VAR5);
}
void FUN14()
{
 FUN2();
 FUN11();
 FUN13();
}
#endif
