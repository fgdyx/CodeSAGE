#ifndef VAR1
static void FUN1(char * VAR2)
{
 fprintf(VAR3, VAR2);
}
static void FUN2()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR5;
 char VAR6[100] = "";
 VAR2 = VAR6;
 strcpy(VAR2, "");
 FUN3(VAR2);
}
static void FUN4(char * VAR2)
{
 fprintf(VAR3, "", VAR2);
}
static void FUN5()
{
 char * VAR2;
 void (*VAR4) (char *) = VAR7;
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
 if (FUN6(FUN7(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN8(VAR24);
 VAR12.VAR25 = FUN9(VAR26);
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
 FUN10(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN11();
 }
#endif
 }
 FUN3(VAR2);
}
void FUN12()
{
 FUN2();
 FUN5();
}
#endif
