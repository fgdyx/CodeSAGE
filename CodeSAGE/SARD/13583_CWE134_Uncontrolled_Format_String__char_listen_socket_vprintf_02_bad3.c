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
 if(1)
 {
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
 if (FUN6(FUN7(2,2), &VAR6) != VAR15)
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
 VAR9.VAR23 = FUN8(VAR24);
 if (FUN9(VAR11, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN10(VAR11, VAR27) == VAR26)
 {
 break;
 }
 VAR13 = FUN11(VAR11, NULL, NULL);
 if (VAR13 == VAR26)
 {
 break;
 }
 VAR8 = recv(VAR13, (char *)(VAR2 + VAR14), sizeof(char) * (100 - VAR14 - 1), 0);
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
 FUN12(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN12(VAR13);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN13();
 }
#endif
 }
 }
 if(1)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
