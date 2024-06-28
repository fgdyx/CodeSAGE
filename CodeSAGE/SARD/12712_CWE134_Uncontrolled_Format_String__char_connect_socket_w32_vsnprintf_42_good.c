#ifndef VAR1
static char * FUN1(char * VAR2)
{
 strcpy(VAR2, "");
 return VAR2;
}
static void FUN2(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN3(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, VAR2, VAR4);
 FUN4(VAR4);
 FUN5(VAR3);
 }
}
static void FUN6()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 VAR2 = FUN1(VAR2);
 FUN2(VAR2, VAR2);
}
static char * FUN7(char * VAR2)
{
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 char *VAR11;
 SOCKET VAR12 = VAR13;
 size_t VAR14 = strlen(VAR2);
 do
 {
#ifdef VAR6
 if (FUN8(FUN9(2,2), &VAR7) != VAR15)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR12 = socket(VAR16, VAR17, VAR18);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR19 = VAR16;
 VAR10.VAR20.VAR21 = FUN10(VAR22);
 VAR10.VAR23 = FUN11(VAR24);
 if (connect(VAR12, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
 {
 break;
 }
 VAR9 = recv(VAR12, (char *)(VAR2 + VAR14), sizeof(char) * (100 - VAR14 - 1), 0);
 if (VAR9 == VAR26 || VAR9 == 0)
 {
 break;
 }
 VAR2[VAR14 + VAR9 / sizeof(char)] = '';
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
 FUN12(VAR12);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN13();
 }
#endif
 }
 return VAR2;
}
static void FUN14(char * VAR2, ...)
{
 {
 char VAR3[100] = "";
 va_list VAR4;
 FUN3(VAR4, VAR2);
 vsnprintf(VAR3, 100-1, "", VAR4);
 FUN4(VAR4);
 FUN5(VAR3);
 }
}
static void FUN15()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 VAR2 = FUN7(VAR2);
 FUN14(VAR2, VAR2);
}
void FUN16()
{
 FUN6();
 FUN15();
}
#endif
