#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 VAR3 *VAR4 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4 = FUN2(VAR2, "");
 if (VAR4 != NULL)
 {
 fclose(VAR4);
 }
 }
}
void FUN3()
{
 char * VAR2;
 char VAR5[VAR6] = VAR7;
 VAR2 = VAR5;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 char *VAR13;
 SOCKET VAR14 = VAR15;
 size_t VAR16 = strlen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN4(FUN5(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR14 = socket(VAR18, VAR19, VAR20);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN6(VAR24);
 VAR12.VAR25 = FUN7(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR2 + VAR16), sizeof(char) * (VAR6 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR11 / sizeof(char)] = '';
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
#ifdef VAR8
 if (VAR10)
 {
 FUN9();
 }
#endif
 }
 FUN1(VAR2);
}
#endif
