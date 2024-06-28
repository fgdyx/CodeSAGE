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
 char * VAR2 = VAR5;
 FUN1(VAR2, VAR2);
}
static void FUN6()
{
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 VAR5 = VAR2;
 FUN5();
}
static void FUN7(char * VAR2, ...)
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
static void FUN8()
{
 char * VAR2 = VAR7;
 FUN7(VAR2, VAR2);
}
static void FUN9()
{
 char * VAR2;
 char VAR6[100] = "";
 VAR2 = VAR6;
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
 if (FUN10(FUN11(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN12(VAR24);
 VAR12.VAR25 = FUN13(VAR26);
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
 FUN14(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN15();
 }
#endif
 }
 VAR7 = VAR2;
 FUN8();
}
void FUN16()
{
 FUN6();
 FUN9();
}
#endif
