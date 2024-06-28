#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 wchar_t VAR4[VAR5] = VAR6;
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
 VAR10 = recv(VAR13, (char *)(VAR2 + VAR15), sizeof(wchar_t) * (VAR5 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR10 / sizeof(wchar_t)] = VAR28'';
 VAR12 = FUN6(VAR2, VAR28'');
 if (VAR12)
 {
 *VAR12 = VAR28'';
 }
 VAR12 = FUN6(VAR2, VAR28'');
 if (VAR12)
 {
 *VAR12 = VAR28'';
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
 VAR3.VAR29 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR30;
 {
 VAR31 *VAR32 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR32 = FUN9(VAR2, VAR28"");
 if (VAR32 != NULL)
 {
 fclose(VAR32);
 }
 }
 }
}
#endif
