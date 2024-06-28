#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 ofstream VAR4;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4.open((char *)VAR2);
 VAR4.close();
 }
}
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 SOCKET VAR16 = VAR15;
 size_t VAR17 = wcslen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN3(FUN4(2,2), &VAR9) != VAR18)
 {
 break;
 }
 VAR10 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR14 = socket(VAR19, VAR20, VAR21);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN5(VAR27);
 if (FUN6(VAR14, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN7(VAR14, VAR30) == VAR29)
 {
 break;
 }
 VAR16 = FUN8(VAR14, NULL, NULL);
 if (VAR16 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR16, (char *)(VAR2 + VAR17), sizeof(wchar_t) * (VAR6 - VAR17 - 1), 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR17 + VAR11 / sizeof(wchar_t)] = VAR31'';
 VAR13 = FUN9(VAR2, VAR31'');
 if (VAR13)
 {
 *VAR13 = VAR31'';
 }
 VAR13 = FUN9(VAR2, VAR31'');
 if (VAR13)
 {
 *VAR13 = VAR31'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN10(VAR14);
 }
 if (VAR16 != VAR15)
 {
 FUN10(VAR16);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN11();
 }
#endif
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
