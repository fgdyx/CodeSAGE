#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4 *VAR5 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5 = FUN2(VAR2, "");
 if (VAR5 != NULL)
 {
 fclose(VAR5);
 }
 }
}
void FUN3()
{
 char * VAR2;
 char VAR6[VAR7] = VAR8;
 VAR2 = VAR6;
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 char *VAR14;
 SOCKET VAR15 = VAR16;
 SOCKET VAR17 = VAR16;
 size_t VAR18 = strlen(VAR2);
 do
 {
#ifdef VAR9
 if (FUN4(FUN5(2,2), &VAR10) != VAR19)
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
 VAR13.VAR27 = FUN6(VAR28);
 if (FUN7(VAR15, (struct VAR29*)&VAR13, sizeof(VAR13)) == VAR30)
 {
 break;
 }
 if (FUN8(VAR15, VAR31) == VAR30)
 {
 break;
 }
 VAR17 = FUN9(VAR15, NULL, NULL);
 if (VAR17 == VAR30)
 {
 break;
 }
 VAR12 = recv(VAR17, (char *)(VAR2 + VAR18), sizeof(char) * (VAR7 - VAR18 - 1), 0);
 if (VAR12 == VAR30 || VAR12 == 0)
 {
 break;
 }
 VAR2[VAR18 + VAR12 / sizeof(char)] = '';
 VAR14 = strchr(VAR2, '');
 if (VAR14)
 {
 *VAR14 = '';
 }
 VAR14 = strchr(VAR2, '');
 if (VAR14)
 {
 *VAR14 = '';
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
 VAR3 = VAR2;
 FUN1();
}
#endif
