#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_34_unionType VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 VAR5.VAR7 = VAR2;
 {
 char * VAR2 = VAR5.VAR8;
 FUN1(VAR2, VAR2);
 }
}
static void FUN6(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN2(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, "", VAR4);
 FUN3(VAR4);
 FUN4(VAR3);
 }
}
static void FUN7()
{
 char * VAR2;
 CWE134_Uncontrolled_Format_String__char_connect_socket_w32_vsnprintf_34_unionType VAR5;
 char VAR6[100] = "";
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
 size_t VAR17 = strlen(VAR2);
 do
 {
#ifdef VAR9
 if (FUN8(FUN9(2,2), &VAR10) != VAR18)
 {
 break;
 }
 VAR11 = 1;
#endif
 VAR15 = socket(VAR19, VAR20, VAR21);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR22 = VAR19;
 VAR13.VAR23.VAR24 = FUN10(VAR25);
 VAR13.VAR26 = FUN11(VAR27);
 if (connect(VAR15, (struct VAR28*)&VAR13, sizeof(VAR13)) == VAR29)
 {
 break;
 }
 VAR12 = recv(VAR15, (char *)(VAR2 + VAR17), sizeof(char) * (100 - VAR17 - 1), 0);
 if (VAR12 == VAR29 || VAR12 == 0)
 {
 break;
 }
 VAR2[VAR17 + VAR12 / sizeof(char)] = '';
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
 FUN12(VAR15);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN13();
 }
#endif
 }
 VAR5.VAR7 = VAR2;
 {
 char * VAR2 = VAR5.VAR8;
 FUN6(VAR2, VAR2);
 }
}
void FUN14()
{
 FUN5();
 FUN7();
}
#endif
