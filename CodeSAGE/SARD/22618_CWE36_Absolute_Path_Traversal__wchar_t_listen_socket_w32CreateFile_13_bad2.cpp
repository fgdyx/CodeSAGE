#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 if(VAR6==5)
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
 if (FUN2(FUN3(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN4(VAR26);
 if (FUN5(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN6(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN7(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (VAR4 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR10 / sizeof(wchar_t)] = VAR5'';
 VAR12 = FUN8(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 VAR12 = FUN8(VAR2, VAR5'');
 if (VAR12)
 {
 *VAR12 = VAR5'';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN9(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN9(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN10();
 }
#endif
 }
 }
 {
 HANDLE VAR30;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR30 = FUN11(VAR2,
 (VAR31|VAR32),
 0,
 NULL,
 VAR33,
 VAR34,
 NULL);
 if (VAR30 != VAR35)
 {
 FUN12(VAR30);
 }
 }
}
#endif
