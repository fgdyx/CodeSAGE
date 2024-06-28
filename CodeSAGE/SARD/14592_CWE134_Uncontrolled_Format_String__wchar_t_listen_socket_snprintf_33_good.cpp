#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR6[100] = VAR5"";
 FUN2(VAR6, 100-1, VAR2);
 FUN3(VAR6);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
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
 if (FUN5(FUN6(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN7(VAR26);
 if (FUN8(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN9(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN10(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR10 / sizeof(wchar_t)] = VAR5'';
 VAR12 = FUN11(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 VAR12 = FUN11(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN12(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN12(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN13();
 }
#endif
 }
 {
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR6[100] = VAR5"";
 FUN2(VAR6, 100-1, VAR5"", VAR2);
 FUN3(VAR6);
 }
 }
}
void FUN14()
{
 FUN1();
 FUN4();
}
#endif
