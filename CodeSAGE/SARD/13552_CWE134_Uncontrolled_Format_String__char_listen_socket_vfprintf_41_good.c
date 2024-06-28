#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN5(char * VAR2)
{
 FUN1(VAR2, VAR2);
}
static void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 strcpy(VAR2, "");
 FUN5(VAR2);
}
static void FUN7(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, "", VAR3);
 FUN4(VAR3);
 }
}
static void FUN8(char * VAR2)
{
 FUN7(VAR2, VAR2);
}
static void FUN9()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 char *VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 size_t VAR15 = strlen(VAR2);
 do
 {
#ifdef VAR6
 if (FUN10(FUN11(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR12 = socket(VAR17, VAR18, VAR19);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN12(VAR25);
 if (FUN13(VAR12, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN14(VAR12, VAR28) == VAR27)
 {
 break;
 }
 VAR14 = FUN15(VAR12, NULL, NULL);
 if (VAR14 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR14, (char *)(VAR2 + VAR15), sizeof(char) * (100 - VAR15 - 1), 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR9 / sizeof(char)] = '';
 VAR11 = strchr(VAR2, '');
 if (VAR11)
 {
 *VAR11 = '';
 }
 VAR11 = strchr(VAR2, '');
 if (VAR11)
 {
 *VAR11 = '';
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN16(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN16(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN17();
 }
#endif
 }
 FUN8(VAR2);
}
void FUN18()
{
 FUN6();
 FUN9();
}
#endif
