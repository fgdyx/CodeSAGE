#ifndef VAR1
static int VAR2 = 0;
static void FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR3);
 }
}
void FUN3()
{
 char * VAR3;
 char VAR4[100] = "";
 VAR3 = VAR4;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 char *VAR10;
 SOCKET VAR11 = VAR12;
 size_t VAR13 = strlen(VAR3);
 do
 {
#ifdef VAR5
 if (FUN4(FUN5(2,2), &VAR6) != VAR14)
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
 VAR9.VAR19.VAR20 = FUN6(VAR21);
 VAR9.VAR22 = FUN7(VAR23);
 if (connect(VAR11, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR11, (char *)(VAR3 + VAR13), sizeof(char) * (100 - VAR13 - 1), 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR3[VAR13 + VAR8 / sizeof(char)] = '';
 VAR10 = strchr(VAR3, '');
 if (VAR10)
 {
 *VAR10 = '';
 }
 VAR10 = strchr(VAR3, '');
 if (VAR10)
 {
 *VAR10 = '';
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN8(VAR11);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN9();
 }
#endif
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
