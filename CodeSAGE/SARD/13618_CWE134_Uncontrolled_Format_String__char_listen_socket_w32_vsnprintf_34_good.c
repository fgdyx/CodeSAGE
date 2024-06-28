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
 CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_34_unionType VAR5;
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
 CWE134_Uncontrolled_Format_String__char_listen_socket_w32_vsnprintf_34_unionType VAR5;
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
 SOCKET VAR17 = VAR16;
 size_t VAR18 = strlen(VAR2);
 do
 {
#ifdef VAR9
 if (FUN8(FUN9(2,2), &VAR10) != VAR19)
 {
 break;
 }
 VAR11 = 1;
#endif
 VAR15 = socket(VAR20, VAR21, VAR22);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR23 = VAR20;
 VAR13.VAR24.VAR25 = VAR26;
 VAR13.VAR27 = FUN10(VAR28);
 if (FUN11(VAR15, (struct VAR29*)&VAR13, sizeof(VAR13)) == VAR30)
 {
 break;
 }
 if (FUN12(VAR15, VAR31) == VAR30)
 {
 break;
 }
 VAR17 = FUN13(VAR15, NULL, NULL);
 if (VAR17 == VAR30)
 {
 break;
 }
 VAR12 = recv(VAR17, (char *)(VAR2 + VAR18), sizeof(char) * (100 - VAR18 - 1), 0);
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
 FUN14(VAR15);
 }
 if (VAR17 != VAR16)
 {
 FUN14(VAR17);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN15();
 }
#endif
 }
 VAR5.VAR7 = VAR2;
 {
 char * VAR2 = VAR5.VAR8;
 FUN6(VAR2, VAR2);
 }
}
void FUN16()
{
 FUN5();
 FUN7();
}
#endif
