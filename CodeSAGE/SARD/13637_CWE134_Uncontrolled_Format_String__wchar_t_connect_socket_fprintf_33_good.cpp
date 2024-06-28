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
 fwprintf(VAR6, VAR2);
 }
}
static void FUN2()
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
 size_t VAR15 = wcslen(VAR2);
 do
 {
#ifdef VAR7
 if (FUN3(FUN4(2,2), &VAR8) != VAR16)
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
 VAR11.VAR21.VAR22 = FUN5(VAR23);
 VAR11.VAR24 = FUN6(VAR25);
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
 VAR12 = FUN7(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 VAR12 = FUN7(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN8(VAR13);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN9();
 }
#endif
 }
 {
 wchar_t * VAR2 = VAR3;
 fwprintf(VAR6, VAR5"", VAR2);
 }
}
void FUN10()
{
 FUN1();
 FUN2();
}
#endif
