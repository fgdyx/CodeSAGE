#ifndef VAR1
static void FUN1(wchar_t * VAR2)
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
 void (*VAR9) (wchar_t *) = VAR10;
 wchar_t VAR11[VAR12] = VAR13"";
 VAR2 = VAR11;
 {
#ifdef VAR14
 WSADATA VAR15;
 int VAR16 = 0;
#endif
 int VAR17;
 struct sockaddr_in VAR18;
 wchar_t *VAR19;
 SOCKET VAR20 = VAR21;
 size_t VAR22 = wcslen(VAR2);
 do
 {
#ifdef VAR14
 if (FUN5(FUN6(2,2), &VAR15) != VAR23)
 {
 break;
 }
 VAR16 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR20 = socket(VAR24, VAR25, VAR26);
 if (VAR20 == VAR21)
 {
 break;
 }
 memset(&VAR18, 0, sizeof(VAR18));
 VAR18.VAR27 = VAR24;
 VAR18.VAR28.VAR29 = FUN7(VAR30);
 VAR18.VAR31 = FUN8(VAR32);
 if (connect(VAR20, (struct VAR33*)&VAR18, sizeof(VAR18)) == VAR34)
 {
 break;
 }
 VAR17 = recv(VAR20, (char *)(VAR2 + VAR22), sizeof(wchar_t) * (VAR12 - VAR22 - 1), 0);
 if (VAR17 == VAR34 || VAR17 == 0)
 {
 break;
 }
 VAR2[VAR22 + VAR17 / sizeof(wchar_t)] = VAR13'';
 VAR19 = FUN9(VAR2, VAR13'');
 if (VAR19)
 {
 *VAR19 = VAR13'';
 }
 VAR19 = FUN9(VAR2, VAR13'');
 if (VAR19)
 {
 *VAR19 = VAR13'';
 }
 }
 while (0);
 if (VAR20 != VAR21)
 {
 FUN10(VAR20);
 }
#ifdef VAR14
 if (VAR16)
 {
 FUN11();
 }
#endif
 }
 FUN12(VAR2);
}
#endif
