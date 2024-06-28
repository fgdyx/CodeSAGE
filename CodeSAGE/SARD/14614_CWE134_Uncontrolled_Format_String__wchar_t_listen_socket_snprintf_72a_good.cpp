#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
static void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 wcscpy(VAR4, VAR6"");
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
void FUN5(VAR2<wchar_t *> VAR3);
static void FUN6()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
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
 size_t VAR16 = wcslen(VAR4);
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
 VAR10 = recv(VAR15, (char *)(VAR4 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR4[VAR16 + VAR10 / sizeof(wchar_t)] = VAR6'';
 VAR12 = FUN13(VAR4, VAR6'');
 if (VAR12)
 {
 *VAR12 = VAR6'';
 }
 VAR12 = FUN13(VAR4, VAR6'');
 if (VAR12)
 {
 *VAR12 = VAR6'';
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
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN5(VAR3);
}
void FUN16()
{
 FUN2();
 FUN6();
}
#endif
