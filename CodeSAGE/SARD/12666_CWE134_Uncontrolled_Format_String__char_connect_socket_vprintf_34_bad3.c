#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 char * VAR2;
 char VAR4[100] = "";
 VAR2 = VAR4;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 char *VAR10;
 SOCKET VAR11 = VAR12;
 size_t VAR13 = strlen(VAR2);
 do
 {
#ifdef VAR5
 if (FUN6(FUN7(2,2), &VAR6) != VAR14)
 {
 break;
 }
 VAR7 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR11 = socket(VAR15, VAR16, VAR17);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN8(VAR21);
 VAR9.VAR22 = FUN9(VAR23);
 if (connect(VAR11, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR11, (char *)(VAR2 + VAR13), sizeof(char) * (100 - VAR13 - 1), 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR2[VAR13 + VAR8 / sizeof(char)] = '';
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
 FUN10(VAR11);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN11();
 }
#endif
 }
 {
 char * VAR26 = VAR2;
 char * VAR2 = VAR26;
 FUN1(VAR2, VAR2);
 }
}
#endif
