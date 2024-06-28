#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 wchar_t *VAR8;
 SOCKET VAR9 = VAR10;
 SOCKET VAR11 = VAR10;
 size_t VAR12 = wcslen(VAR2);
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR13)
 {
 break;
 }
 VAR5 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR9 = socket(VAR14, VAR15, VAR16);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR17 = VAR14;
 VAR7.VAR18.VAR19 = VAR20;
 VAR7.VAR21 = FUN4(VAR22);
 if (FUN5(VAR9, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
 {
 break;
 }
 if (FUN6(VAR9, VAR25) == VAR24)
 {
 break;
 }
 VAR11 = FUN7(VAR9, NULL, NULL);
 if (VAR11 == VAR24)
 {
 break;
 }
 VAR6 = recv(VAR11, (char *)(VAR2 + VAR12), sizeof(wchar_t) * (VAR26 - VAR12 - 1), 0);
 if (VAR6 == VAR24 || VAR6 == 0)
 {
 break;
 }
 VAR2[VAR12 + VAR6 / sizeof(wchar_t)] = VAR27'';
 VAR8 = FUN8(VAR2, VAR27'');
 if (VAR8)
 {
 *VAR8 = VAR27'';
 }
 VAR8 = FUN8(VAR2, VAR27'');
 if (VAR8)
 {
 *VAR8 = VAR27'';
 }
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN9(VAR9);
 }
 if (VAR11 != VAR10)
 {
 FUN9(VAR11);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN10();
 }
#endif
 }
}
void FUN11()
{
 wchar_t * VAR2;
 wchar_t VAR28[VAR26] = VAR29;
 VAR2 = VAR28;
 FUN1(VAR2);
 {
 ofstream VAR30;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR30.open((char *)VAR2);
 VAR30.close();
 }
}
#endif
