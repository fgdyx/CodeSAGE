#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 int VAR3;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR3 = FUN2(VAR2, VAR4|VAR5, VAR6|VAR7);
 if (VAR3 != -1)
 {
 FUN3(VAR3);
 }
 }
}
void FUN4()
{
 wchar_t * VAR2;
 void (*VAR8) (wchar_t *) = VAR9;
 wchar_t VAR10[VAR11] = VAR12;
 VAR2 = VAR10;
 {
#ifdef VAR13
 WSADATA VAR14;
 int VAR15 = 0;
#endif
 int VAR16;
 struct sockaddr_in VAR17;
 wchar_t *VAR18;
 SOCKET VAR19 = VAR20;
 SOCKET VAR21 = VAR20;
 size_t VAR22 = wcslen(VAR2);
 do
 {
#ifdef VAR13
 if (FUN5(FUN6(2,2), &VAR14) != VAR23)
 {
 break;
 }
 VAR15 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR19 = socket(VAR24, VAR25, VAR26);
 if (VAR19 == VAR20)
 {
 break;
 }
 memset(&VAR17, 0, sizeof(VAR17));
 VAR17.VAR27 = VAR24;
 VAR17.VAR28.VAR29 = VAR30;
 VAR17.VAR31 = FUN7(VAR32);
 if (FUN8(VAR19, (struct VAR33*)&VAR17, sizeof(VAR17)) == VAR34)
 {
 break;
 }
 if (FUN9(VAR19, VAR35) == VAR34)
 {
 break;
 }
 VAR21 = FUN10(VAR19, NULL, NULL);
 if (VAR21 == VAR34)
 {
 break;
 }
 VAR16 = recv(VAR21, (char *)(VAR2 + VAR22), sizeof(wchar_t) * (VAR11 - VAR22 - 1), 0);
 if (VAR16 == VAR34 || VAR16 == 0)
 {
 break;
 }
 VAR2[VAR22 + VAR16 / sizeof(wchar_t)] = VAR36'';
 VAR18 = FUN11(VAR2, VAR36'');
 if (VAR18)
 {
 *VAR18 = VAR36'';
 }
 VAR18 = FUN11(VAR2, VAR36'');
 if (VAR18)
 {
 *VAR18 = VAR36'';
 }
 }
 while (0);
 if (VAR19 != VAR20)
 {
 FUN12(VAR19);
 }
 if (VAR21 != VAR20)
 {
 FUN12(VAR21);
 }
#ifdef VAR13
 if (VAR15)
 {
 FUN13();
 }
#endif
 }
 FUN14(VAR2);
}
#endif
