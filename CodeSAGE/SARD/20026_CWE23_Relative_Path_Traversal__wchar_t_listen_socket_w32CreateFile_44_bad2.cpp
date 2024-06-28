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
 wchar_t VAR11[VAR12] = VAR13;
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
 SOCKET VAR22 = VAR21;
 size_t VAR23 = wcslen(VAR2);
 do
 {
#ifdef VAR14
 if (FUN5(FUN6(2,2), &VAR15) != VAR24)
 {
 break;
 }
 VAR16 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR20 = socket(VAR25, VAR26, VAR27);
 if (VAR20 == VAR21)
 {
 break;
 }
 memset(&VAR18, 0, sizeof(VAR18));
 VAR18.VAR28 = VAR25;
 VAR18.VAR29.VAR30 = VAR31;
 VAR18.VAR32 = FUN7(VAR33);
 if (FUN8(VAR20, (struct VAR34*)&VAR18, sizeof(VAR18)) == VAR35)
 {
 break;
 }
 if (FUN9(VAR20, VAR36) == VAR35)
 {
 break;
 }
 VAR22 = FUN10(VAR20, NULL, NULL);
 if (VAR22 == VAR35)
 {
 break;
 }
 VAR17 = recv(VAR22, (char *)(VAR2 + VAR23), sizeof(wchar_t) * (VAR12 - VAR23 - 1), 0);
 if (VAR17 == VAR35 || VAR17 == 0)
 {
 break;
 }
 VAR2[VAR23 + VAR17 / sizeof(wchar_t)] = VAR37'';
 VAR19 = FUN11(VAR2, VAR37'');
 if (VAR19)
 {
 *VAR19 = VAR37'';
 }
 VAR19 = FUN11(VAR2, VAR37'');
 if (VAR19)
 {
 *VAR19 = VAR37'';
 }
 }
 while (0);
 if (VAR20 != VAR21)
 {
 FUN12(VAR20);
 }
 if (VAR22 != VAR21)
 {
 FUN12(VAR22);
 }
#ifdef VAR14
 if (VAR16)
 {
 FUN13();
 }
#endif
 }
 FUN14(VAR2);
}
#endif
