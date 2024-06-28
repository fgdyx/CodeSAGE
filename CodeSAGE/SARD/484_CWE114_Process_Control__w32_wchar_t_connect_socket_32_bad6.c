#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
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
 if (FUN2(FUN3(2,2), &VAR8) != VAR16)
 {
 break;
 }
 VAR9 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR13 = socket(VAR17, VAR18, VAR19);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN4(VAR23);
 VAR11.VAR24 = FUN5(VAR25);
 if (connect(VAR13, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR13, (char *)(VAR2 + VAR15), sizeof(wchar_t) * (100 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR10 / sizeof(wchar_t)] = VAR6'';
 VAR12 = FUN6(VAR2, VAR6'');
 if (VAR12)
 {
 *VAR12 = VAR6'';
 }
 VAR12 = FUN6(VAR2, VAR6'');
 if (VAR12)
 {
 *VAR12 = VAR6'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN7(VAR13);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN8();
 }
#endif
 }
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 HMODULE VAR28;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR28 = LoadLibraryW(VAR2);
 if (VAR28 != NULL)
 {
 FUN9(VAR28);
 FUN10("");
 }
 else
 {
 FUN10("");
 }
 }
 }
}
#endif
