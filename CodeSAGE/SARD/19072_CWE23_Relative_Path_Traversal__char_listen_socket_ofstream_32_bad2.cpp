#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char * *VAR3 = &VAR2;
 char * *VAR4 = &VAR2;
 char VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
 char * VAR2 = *VAR3;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 char *VAR13;
 SOCKET VAR14 = VAR15;
 SOCKET VAR16 = VAR15;
 size_t VAR17 = strlen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN2(FUN3(2,2), &VAR9) != VAR18)
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
 VAR12.VAR26 = FUN4(VAR27);
 if (FUN5(VAR14, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN6(VAR14, VAR30) == VAR29)
 {
 break;
 }
 VAR16 = FUN7(VAR14, NULL, NULL);
 if (VAR16 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR16, (char *)(VAR2 + VAR17), sizeof(char) * (VAR6 - VAR17 - 1), 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR17 + VAR11 / sizeof(char)] = '';
 VAR13 = strchr(VAR2, '');
 if (VAR13)
 {
 *VAR13 = '';
 }
 VAR13 = strchr(VAR2, '');
 if (VAR13)
 {
 *VAR13 = '';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN8(VAR14);
 }
 if (VAR16 != VAR15)
 {
 FUN8(VAR16);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN9();
 }
#endif
 }
 *VAR3 = VAR2;
 }
 {
 char * VAR2 = *VAR4;
 {
 ofstream VAR31;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR31.open((char *)VAR2);
 VAR31.close();
 }
 }
}
#endif
