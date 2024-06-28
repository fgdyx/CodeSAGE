#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
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
 size_t VAR15 = wcslen(VAR3);
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
 VAR10 = recv(VAR13, (char *)(VAR3 + VAR15), sizeof(wchar_t) * (VAR5 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR3[VAR15 + VAR10 / sizeof(wchar_t)] = VAR6'';
 VAR12 = FUN6(VAR3, VAR6'');
 if (VAR12)
 {
 *VAR12 = VAR6'';
 }
 VAR12 = FUN6(VAR3, VAR6'');
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
 }
 {
 HANDLE VAR28;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR28 = FUN9(VAR3,
 (VAR29|VAR30),
 0,
 NULL,
 VAR31,
 VAR32,
 NULL);
 if (VAR28 != VAR33)
 {
 FUN10(VAR28);
 }
 }
}
#endif
