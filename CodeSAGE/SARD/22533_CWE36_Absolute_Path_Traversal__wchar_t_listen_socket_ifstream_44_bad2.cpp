#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 ifstream VAR3;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR3.open((char *)VAR2);
 VAR3.close();
 }
}
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR4) (wchar_t *) = VAR5;
 wchar_t VAR6[VAR7] = VAR8"";
 VAR2 = VAR6;
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 wchar_t *VAR14;
 SOCKET VAR15 = VAR16;
 SOCKET VAR17 = VAR16;
 size_t VAR18 = wcslen(VAR2);
 do
 {
#ifdef VAR9
 if (FUN3(FUN4(2,2), &VAR10) != VAR19)
 {
 break;
 }
 VAR11 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR15 = socket(VAR20, VAR21, VAR22);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR23 = VAR20;
 VAR13.VAR24.VAR25 = VAR26;
 VAR13.VAR27 = FUN5(VAR28);
 if (FUN6(VAR15, (struct VAR29*)&VAR13, sizeof(VAR13)) == VAR30)
 {
 break;
 }
 if (FUN7(VAR15, VAR31) == VAR30)
 {
 break;
 }
 VAR17 = FUN8(VAR15, NULL, NULL);
 if (VAR17 == VAR30)
 {
 break;
 }
 VAR12 = recv(VAR17, (char *)(VAR2 + VAR18), sizeof(wchar_t) * (VAR7 - VAR18 - 1), 0);
 if (VAR12 == VAR30 || VAR12 == 0)
 {
 break;
 }
 VAR2[VAR18 + VAR12 / sizeof(wchar_t)] = VAR8'';
 VAR14 = FUN9(VAR2, VAR8'');
 if (VAR14)
 {
 *VAR14 = VAR8'';
 }
 VAR14 = FUN9(VAR2, VAR8'');
 if (VAR14)
 {
 *VAR14 = VAR8'';
 }
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN10(VAR15);
 }
 if (VAR17 != VAR16)
 {
 FUN10(VAR17);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN11();
 }
#endif
 }
 FUN12(VAR2);
}
#endif
