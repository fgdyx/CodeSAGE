#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 char *VAR10;
 SOCKET VAR11 = VAR12;
 SOCKET VAR13 = VAR12;
 size_t VAR14 = strlen(VAR2);
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR11 = socket(VAR16, VAR17, VAR18);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN4(VAR24);
 if (FUN5(VAR11, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN6(VAR11, VAR27) == VAR26)
 {
 break;
 }
 VAR13 = FUN7(VAR11, NULL, NULL);
 if (VAR13 == VAR26)
 {
 break;
 }
 VAR8 = recv(VAR13, (char *)(VAR2 + VAR14), sizeof(char) * (VAR4 - VAR14 - 1), 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR2[VAR14 + VAR8 / sizeof(char)] = '';
 VAR10 = strchr(VAR2, '');
 if (VAR10)
 {
 *VAR10 = '';
 }
 VAR10 = strchr(VAR2, '');
 if (VAR10)
 {
 *VAR10 = '';
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN8(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN8(VAR13);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN9();
 }
#endif
 }
 {
 char * VAR28 = VAR2;
 char * VAR2 = VAR28;
 {
 VAR29 *VAR30 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR30 = FUN10(VAR2, "");
 if (VAR30 != NULL)
 {
 fclose(VAR30);
 }
 }
 }
}
#endif
