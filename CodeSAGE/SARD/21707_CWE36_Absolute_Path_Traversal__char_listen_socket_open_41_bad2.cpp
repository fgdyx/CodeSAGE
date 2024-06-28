#ifndef VAR1
void FUN1(char * VAR2)
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
 char * VAR2;
 char VAR8[VAR9] = "";
 VAR2 = VAR8;
 {
#ifdef VAR10
 WSADATA VAR11;
 int VAR12 = 0;
#endif
 int VAR13;
 struct sockaddr_in VAR14;
 char *VAR15;
 SOCKET VAR16 = VAR17;
 SOCKET VAR18 = VAR17;
 size_t VAR19 = strlen(VAR2);
 do
 {
#ifdef VAR10
 if (FUN5(FUN6(2,2), &VAR11) != VAR20)
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
 VAR14.VAR28 = FUN7(VAR29);
 if (FUN8(VAR16, (struct VAR30*)&VAR14, sizeof(VAR14)) == VAR31)
 {
 break;
 }
 if (FUN9(VAR16, VAR32) == VAR31)
 {
 break;
 }
 VAR18 = FUN10(VAR16, NULL, NULL);
 if (VAR18 == VAR31)
 {
 break;
 }
 VAR13 = recv(VAR18, (char *)(VAR2 + VAR19), sizeof(char) * (VAR9 - VAR19 - 1), 0);
 if (VAR13 == VAR31 || VAR13 == 0)
 {
 break;
 }
 VAR2[VAR19 + VAR13 / sizeof(char)] = '';
 VAR15 = strchr(VAR2, '');
 if (VAR15)
 {
 *VAR15 = '';
 }
 VAR15 = strchr(VAR2, '');
 if (VAR15)
 {
 *VAR15 = '';
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
 FUN1(VAR2);
}
#endif
