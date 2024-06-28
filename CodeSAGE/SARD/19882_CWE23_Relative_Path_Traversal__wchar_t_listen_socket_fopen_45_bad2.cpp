#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 VAR4 *VAR5 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5 = FUN2(VAR2, VAR6"");
 if (VAR5 != NULL)
 {
 fclose(VAR5);
 }
 }
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR7[VAR8] = VAR9;
 VAR2 = VAR7;
 {
#ifdef VAR10
 WSADATA VAR11;
 int VAR12 = 0;
#endif
 int VAR13;
 struct sockaddr_in VAR14;
 wchar_t *VAR15;
 SOCKET VAR16 = VAR17;
 SOCKET VAR18 = VAR17;
 size_t VAR19 = wcslen(VAR2);
 do
 {
#ifdef VAR10
 if (FUN4(FUN5(2,2), &VAR11) != VAR20)
 {
 break;
 }
 VAR12 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR16 = socket(VAR21, VAR22, VAR23);
 if (VAR16 == VAR17)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR24 = VAR21;
 VAR14.VAR25.VAR26 = VAR27;
 VAR14.VAR28 = FUN6(VAR29);
 if (FUN7(VAR16, (struct VAR30*)&VAR14, sizeof(VAR14)) == VAR31)
 {
 break;
 }
 if (FUN8(VAR16, VAR32) == VAR31)
 {
 break;
 }
 VAR18 = FUN9(VAR16, NULL, NULL);
 if (VAR18 == VAR31)
 {
 break;
 }
 VAR13 = recv(VAR18, (char *)(VAR2 + VAR19), sizeof(wchar_t) * (VAR8 - VAR19 - 1), 0);
 if (VAR13 == VAR31 || VAR13 == 0)
 {
 break;
 }
 VAR2[VAR19 + VAR13 / sizeof(wchar_t)] = VAR6'';
 VAR15 = FUN10(VAR2, VAR6'');
 if (VAR15)
 {
 *VAR15 = VAR6'';
 }
 VAR15 = FUN10(VAR2, VAR6'');
 if (VAR15)
 {
 *VAR15 = VAR6'';
 }
 }
 while (0);
 if (VAR16 != VAR17)
 {
 FUN11(VAR16);
 }
 if (VAR18 != VAR17)
 {
 FUN11(VAR18);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN12();
 }
#endif
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
