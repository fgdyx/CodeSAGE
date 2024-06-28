#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(char * VAR5);
static void FUN2()
{
 char * VAR5;
 char VAR6[100] = "";
 VAR5 = VAR6;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 char *VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 size_t VAR16 = strlen(VAR5);
 do
 {
#ifdef VAR7
 if (FUN3(FUN4(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN5(VAR26);
 if (FUN6(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN7(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN8(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR5 + VAR16), sizeof(char) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR5[VAR16 + VAR10 / sizeof(char)] = '';
 VAR12 = strchr(VAR5, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 VAR12 = strchr(VAR5, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN9(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN9(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN10();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN11(char * VAR5);
static void FUN12()
{
 char * VAR5;
 char VAR6[100] = "";
 VAR5 = VAR6;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 char *VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 size_t VAR16 = strlen(VAR5);
 do
 {
#ifdef VAR7
 if (FUN3(FUN4(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN5(VAR26);
 if (FUN6(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN7(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN8(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR5 + VAR16), sizeof(char) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR5[VAR16 + VAR10 / sizeof(char)] = '';
 VAR12 = strchr(VAR5, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 VAR12 = strchr(VAR5, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN9(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN9(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN10();
 }
#endif
 }
 VAR3 = 1;
 FUN11(VAR5);
}
void FUN13(char * VAR5);
static void FUN14()
{
 char * VAR5;
 char VAR6[100] = "";
 VAR5 = VAR6;
 strcpy(VAR5, "");
 VAR4 = 1;
 FUN13(VAR5);
}
void FUN15()
{
 FUN2();
 FUN12();
 FUN14();
}
#endif
