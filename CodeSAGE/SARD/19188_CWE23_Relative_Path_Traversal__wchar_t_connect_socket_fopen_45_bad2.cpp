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
 size_t VAR18 = wcslen(VAR2);
 do
 {
#ifdef VAR10
 if (FUN4(FUN5(2,2), &VAR11) != VAR19)
 {
 break;
 }
 VAR12 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR16 = socket(VAR20, VAR21, VAR22);
 if (VAR16 == VAR17)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR23 = VAR20;
 VAR14.VAR24.VAR25 = FUN6(VAR26);
 VAR14.VAR27 = FUN7(VAR28);
 if (connect(VAR16, (struct VAR29*)&VAR14, sizeof(VAR14)) == VAR30)
 {
 break;
 }
 VAR13 = recv(VAR16, (char *)(VAR2 + VAR18), sizeof(wchar_t) * (VAR8 - VAR18 - 1), 0);
 if (VAR13 == VAR30 || VAR13 == 0)
 {
 break;
 }
 VAR2[VAR18 + VAR13 / sizeof(wchar_t)] = VAR6'';
 VAR15 = FUN8(VAR2, VAR6'');
 if (VAR15)
 {
 *VAR15 = VAR6'';
 }
 VAR15 = FUN8(VAR2, VAR6'');
 if (VAR15)
 {
 *VAR15 = VAR6'';
 }
 }
 while (0);
 if (VAR16 != VAR17)
 {
 FUN9(VAR16);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN10();
 }
#endif
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
