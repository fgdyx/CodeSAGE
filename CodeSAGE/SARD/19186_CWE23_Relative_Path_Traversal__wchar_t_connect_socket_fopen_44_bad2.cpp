#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 VAR3 *VAR4 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4 = FUN2(VAR2, VAR5"");
 if (VAR4 != NULL)
 {
 fclose(VAR4);
 }
 }
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR6) (wchar_t *) = VAR7;
 wchar_t VAR8[VAR9] = VAR10;
 VAR2 = VAR8;
 {
#ifdef VAR11
 WSADATA VAR12;
 int VAR13 = 0;
#endif
 int VAR14;
 struct sockaddr_in VAR15;
 wchar_t *VAR16;
 SOCKET VAR17 = VAR18;
 size_t VAR19 = wcslen(VAR2);
 do
 {
#ifdef VAR11
 if (FUN4(FUN5(2,2), &VAR12) != VAR20)
 {
 break;
 }
 VAR13 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR17 = socket(VAR21, VAR22, VAR23);
 if (VAR17 == VAR18)
 {
 break;
 }
 memset(&VAR15, 0, sizeof(VAR15));
 VAR15.VAR24 = VAR21;
 VAR15.VAR25.VAR26 = FUN6(VAR27);
 VAR15.VAR28 = FUN7(VAR29);
 if (connect(VAR17, (struct VAR30*)&VAR15, sizeof(VAR15)) == VAR31)
 {
 break;
 }
 VAR14 = recv(VAR17, (char *)(VAR2 + VAR19), sizeof(wchar_t) * (VAR9 - VAR19 - 1), 0);
 if (VAR14 == VAR31 || VAR14 == 0)
 {
 break;
 }
 VAR2[VAR19 + VAR14 / sizeof(wchar_t)] = VAR5'';
 VAR16 = FUN8(VAR2, VAR5'');
 if (VAR16)
 {
 *VAR16 = VAR5'';
 }
 VAR16 = FUN8(VAR2, VAR5'');
 if (VAR16)
 {
 *VAR16 = VAR5'';
 }
 }
 while (0);
 if (VAR17 != VAR18)
 {
 FUN9(VAR17);
 }
#ifdef VAR11
 if (VAR13)
 {
 FUN10();
 }
#endif
 }
 FUN11(VAR2);
}
#endif
