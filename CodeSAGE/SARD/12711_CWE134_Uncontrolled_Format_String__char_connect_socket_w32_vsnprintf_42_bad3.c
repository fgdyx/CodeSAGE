#ifndef VAR1
static char * FUN1(char * VAR2)
{
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 char *VAR8;
 SOCKET VAR9 = VAR10;
 size_t VAR11 = strlen(VAR2);
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR9 = socket(VAR13, VAR14, VAR15);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR9, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR9, (char *)(VAR2 + VAR11), sizeof(char) * (100 - VAR11 - 1), 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR2[VAR11 + VAR6 / sizeof(char)] = '';
 VAR8 = strchr(VAR2, '');
 if (VAR8)
 {
 *VAR8 = '';
 }
 VAR8 = strchr(VAR2, '');
 if (VAR8)
 {
 *VAR8 = '';
 }
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN6(VAR9);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN7();
 }
#endif
 }
 return VAR2;
}
static void FUN8(char * VAR2, ...)
{
 {
 char VAR24[100] = "";
 va_list VAR25;
 FUN9(VAR25, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 vsnprintf(VAR24, 100-1, VAR2, VAR25);
 FUN10(VAR25);
 FUN11(VAR24);
 }
}
void FUN12()
{
 char * VAR2;
 char VAR26[100] = "";
 VAR2 = VAR26;
 VAR2 = FUN1(VAR2);
 FUN8(VAR2, VAR2);
}
#endif
