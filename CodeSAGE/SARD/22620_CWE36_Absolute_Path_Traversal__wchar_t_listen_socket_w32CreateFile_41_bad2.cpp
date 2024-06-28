#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 HANDLE VAR3;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR3 = FUN2(VAR2,
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 if (VAR3 != VAR8)
 {
 FUN3(VAR3);
 }
 }
}
void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR9[VAR10] = VAR11"";
 VAR2 = VAR9;
 {
#ifdef VAR12
 WSADATA VAR13;
 int VAR14 = 0;
#endif
 int VAR15;
 struct sockaddr_in VAR16;
 wchar_t *VAR17;
 SOCKET VAR18 = VAR19;
 SOCKET VAR20 = VAR19;
 size_t VAR21 = wcslen(VAR2);
 do
 {
#ifdef VAR12
 if (FUN5(FUN6(2,2), &VAR13) != VAR22)
 {
 break;
 }
 VAR14 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR18 = socket(VAR23, VAR24, VAR25);
 if (VAR18 == VAR19)
 {
 break;
 }
 memset(&VAR16, 0, sizeof(VAR16));
 VAR16.VAR26 = VAR23;
 VAR16.VAR27.VAR28 = VAR29;
 VAR16.VAR30 = FUN7(VAR31);
 if (FUN8(VAR18, (struct VAR32*)&VAR16, sizeof(VAR16)) == VAR33)
 {
 break;
 }
 if (FUN9(VAR18, VAR34) == VAR33)
 {
 break;
 }
 VAR20 = FUN10(VAR18, NULL, NULL);
 if (VAR20 == VAR33)
 {
 break;
 }
 VAR15 = recv(VAR20, (char *)(VAR2 + VAR21), sizeof(wchar_t) * (VAR10 - VAR21 - 1), 0);
 if (VAR15 == VAR33 || VAR15 == 0)
 {
 break;
 }
 VAR2[VAR21 + VAR15 / sizeof(wchar_t)] = VAR11'';
 VAR17 = FUN11(VAR2, VAR11'');
 if (VAR17)
 {
 *VAR17 = VAR11'';
 }
 VAR17 = FUN11(VAR2, VAR11'');
 if (VAR17)
 {
 *VAR17 = VAR11'';
 }
 }
 while (0);
 if (VAR18 != VAR19)
 {
 FUN12(VAR18);
 }
 if (VAR20 != VAR19)
 {
 FUN12(VAR20);
 }
#ifdef VAR12
 if (VAR14)
 {
 FUN13();
 }
#endif
 }
 FUN1(VAR2);
}
#endif
