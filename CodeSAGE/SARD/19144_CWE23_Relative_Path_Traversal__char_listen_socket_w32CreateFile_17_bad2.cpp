#ifndef VAR1
void FUN1()
{
 int VAR2;
 char * VAR3;
 char VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 char *VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 size_t VAR16 = strlen(VAR3);
 do
 {
#ifdef VAR7
 if (FUN2(FUN3(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN4(VAR26);
 if (FUN5(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN6(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN7(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR3 + VAR16), sizeof(char) * (VAR5 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR3[VAR16 + VAR10 / sizeof(char)] = '';
 VAR12 = strchr(VAR3, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 VAR12 = strchr(VAR3, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN8(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN8(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN9();
 }
#endif
 }
 }
 {
 HANDLE VAR30;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR30 = FUN10(VAR3,
 (VAR31|VAR32),
 0,
 NULL,
 VAR33,
 VAR34,
 NULL);
 if (VAR30 != VAR35)
 {
 FUN11(VAR30);
 }
 }
}
#endif
