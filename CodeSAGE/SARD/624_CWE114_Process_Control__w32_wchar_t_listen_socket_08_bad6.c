#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 wchar_t *VAR10;
 SOCKET VAR11 = VAR12;
 SOCKET VAR13 = VAR12;
 size_t VAR14 = wcslen(VAR2);
 do
 {
#ifdef VAR5
 if (FUN3(FUN4(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR11 = socket(VAR16, VAR17, VAR18);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN5(VAR24);
 if (FUN6(VAR11, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN7(VAR11, VAR27) == VAR26)
 {
 break;
 }
 VAR13 = FUN8(VAR11, NULL, NULL);
 if (VAR13 == VAR26)
 {
 break;
 }
 VAR8 = recv(VAR13, (char *)(VAR2 + VAR14), sizeof(wchar_t) * (100 - VAR14 - 1), 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR2[VAR14 + VAR8 / sizeof(wchar_t)] = VAR4'';
 VAR10 = FUN9(VAR2, VAR4'');
 if (VAR10)
 {
 *VAR10 = VAR4'';
 }
 VAR10 = FUN9(VAR2, VAR4'');
 if (VAR10)
 {
 *VAR10 = VAR4'';
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN10(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN10(VAR13);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN11();
 }
#endif
 }
 }
 {
 HMODULE VAR28;
 /* POTENTIAL FLAW: If the path to the library is not specified, an attacker may be able to
 * replace his own file with the intended library */
 VAR28 = LoadLibraryW(VAR2);
 if (VAR28 != NULL)
 {
 FUN12(VAR28);
 FUN13("");
 }
 else
 {
 FUN13("");
 }
 }
}
#endif
