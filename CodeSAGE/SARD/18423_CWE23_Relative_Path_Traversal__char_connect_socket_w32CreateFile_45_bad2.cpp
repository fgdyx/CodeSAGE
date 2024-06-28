#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 HANDLE VAR4;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR4 = FUN2(VAR2,
 (VAR5|VAR6),
 0,
 NULL,
 VAR7,
 VAR8,
 NULL);
 if (VAR4 != VAR9)
 {
 FUN3(VAR4);
 }
 }
}
void FUN4()
{
 char * VAR2;
 char VAR10[VAR11] = VAR12;
 VAR2 = VAR10;
 {
#ifdef VAR13
 WSADATA VAR14;
 int VAR15 = 0;
#endif
 int VAR16;
 struct sockaddr_in VAR17;
 char *VAR18;
 SOCKET VAR19 = VAR20;
 size_t VAR21 = strlen(VAR2);
 do
 {
#ifdef VAR13
 if (FUN5(FUN6(2,2), &VAR14) != VAR22)
 {
 break;
 }
 VAR15 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR19 = socket(VAR23, VAR24, VAR25);
 if (VAR19 == VAR20)
 {
 break;
 }
 memset(&VAR17, 0, sizeof(VAR17));
 VAR17.VAR26 = VAR23;
 VAR17.VAR27.VAR28 = FUN7(VAR29);
 VAR17.VAR30 = FUN8(VAR31);
 if (connect(VAR19, (struct VAR32*)&VAR17, sizeof(VAR17)) == VAR33)
 {
 break;
 }
 VAR16 = recv(VAR19, (char *)(VAR2 + VAR21), sizeof(char) * (VAR11 - VAR21 - 1), 0);
 if (VAR16 == VAR33 || VAR16 == 0)
 {
 break;
 }
 VAR2[VAR21 + VAR16 / sizeof(char)] = '';
 VAR18 = strchr(VAR2, '');
 if (VAR18)
 {
 *VAR18 = '';
 }
 VAR18 = strchr(VAR2, '');
 if (VAR18)
 {
 *VAR18 = '';
 }
 }
 while (0);
 if (VAR19 != VAR20)
 {
 FUN9(VAR19);
 }
#ifdef VAR13
 if (VAR15)
 {
 FUN10();
 }
#endif
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
