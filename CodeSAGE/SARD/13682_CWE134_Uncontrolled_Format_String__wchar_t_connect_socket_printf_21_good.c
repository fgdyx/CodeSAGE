#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(wchar_t * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 FUN3(VAR6"", VAR5);
 }
}
static void FUN4()
{
 wchar_t * VAR5;
 wchar_t VAR7[100] = VAR6"";
 VAR5 = VAR7;
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
 if (FUN5(FUN6(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN7(VAR24);
 VAR12.VAR25 = FUN8(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR5 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR5[VAR16 + VAR11 / sizeof(wchar_t)] = VAR6'';
 VAR13 = FUN9(VAR5, VAR6'');
 if (VAR13)
 {
 *VAR13 = VAR6'';
 }
 VAR13 = FUN9(VAR5, VAR6'');
 if (VAR13)
 {
 *VAR13 = VAR6'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN10(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN11();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN12(wchar_t * VAR5)
{
 if(VAR3)
 {
 FUN3(VAR6"", VAR5);
 }
}
static void FUN13()
{
 wchar_t * VAR5;
 wchar_t VAR7[100] = VAR6"";
 VAR5 = VAR7;
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
 if (FUN5(FUN6(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN7(VAR24);
 VAR12.VAR25 = FUN8(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR5 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR5[VAR16 + VAR11 / sizeof(wchar_t)] = VAR6'';
 VAR13 = FUN9(VAR5, VAR6'');
 if (VAR13)
 {
 *VAR13 = VAR6'';
 }
 VAR13 = FUN9(VAR5, VAR6'');
 if (VAR13)
 {
 *VAR13 = VAR6'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN10(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN11();
 }
#endif
 }
 VAR3 = 1;
 FUN12(VAR5);
}
static void FUN14(wchar_t * VAR5)
{
 if(VAR4)
 {
 FUN3(VAR5);
 }
}
static void FUN15()
{
 wchar_t * VAR5;
 wchar_t VAR7[100] = VAR6"";
 VAR5 = VAR7;
 wcscpy(VAR5, VAR6"");
 VAR4 = 1;
 FUN14(VAR5);
}
void FUN16()
{
 FUN4();
 FUN13();
 FUN15();
}
#endif
