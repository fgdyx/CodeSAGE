#ifndef VAR1
static void FUN1(char * VAR2)
{
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR2);
}
void FUN3()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 char *VAR9;
 SOCKET VAR10 = VAR11;
 SOCKET VAR12 = VAR11;
 size_t VAR13 = strlen(VAR2);
 do
 {
#ifdef VAR4
 if (FUN4(FUN5(2,2), &VAR5) != VAR14)
 {
 break;
 }
 VAR6 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR10 = socket(VAR15, VAR16, VAR17);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR18 = VAR15;
 VAR8.VAR19.VAR20 = VAR21;
 VAR8.VAR22 = FUN6(VAR23);
 if (FUN7(VAR10, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
 {
 break;
 }
 if (FUN8(VAR10, VAR26) == VAR25)
 {
 break;
 }
 VAR12 = FUN9(VAR10, NULL, NULL);
 if (VAR12 == VAR25)
 {
 break;
 }
 VAR7 = recv(VAR12, (char *)(VAR2 + VAR13), sizeof(char) * (100 - VAR13 - 1), 0);
 if (VAR7 == VAR25 || VAR7 == 0)
 {
 break;
 }
 VAR2[VAR13 + VAR7 / sizeof(char)] = '';
 VAR9 = strchr(VAR2, '');
 if (VAR9)
 {
 *VAR9 = '';
 }
 VAR9 = strchr(VAR2, '');
 if (VAR9)
 {
 *VAR9 = '';
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN10(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN10(VAR12);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN11();
 }
#endif
 }
 FUN1(VAR2);
}
#endif
