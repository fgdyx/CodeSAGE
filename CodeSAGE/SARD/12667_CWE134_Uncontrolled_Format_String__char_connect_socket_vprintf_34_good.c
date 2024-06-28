#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_connect_socket_vprintf_34_unionType VAR4;
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 VAR4.VAR6 = VAR2;
 {
 char * VAR2 = VAR4.VAR7;
 FUN1(VAR2, VAR2);
 }
}
static void FUN6(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3("", VAR3);
 FUN4(VAR3);
 }
}
static void FUN7()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_connect_socket_vprintf_34_unionType VAR4;
 char VAR5[100] = "";
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
 if (FUN8(FUN9(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR14 = socket(VAR18, VAR19, VAR20);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN10(VAR24);
 VAR12.VAR25 = FUN11(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR2 + VAR16), sizeof(char) * (100 - VAR16 - 1), 0);
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
 FUN12(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN13();
 }
#endif
 }
 VAR4.VAR6 = VAR2;
 {
 char * VAR2 = VAR4.VAR7;
 FUN6(VAR2, VAR2);
 }
}
void FUN14()
{
 FUN5();
 FUN7();
}
#endif
