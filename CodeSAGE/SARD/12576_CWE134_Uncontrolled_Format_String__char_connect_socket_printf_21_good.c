#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(char * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 FUN3("", VAR5);
 }
}
static void FUN4()
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
 size_t VAR15 = strlen(VAR5);
 do
 {
#ifdef VAR7
 if (FUN5(FUN6(2,2), &VAR8) != VAR16)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR17, VAR18, VAR19);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN7(VAR23);
 VAR11.VAR24 = FUN8(VAR25);
 if (connect(VAR13, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR13, (char *)(VAR5 + VAR15), sizeof(char) * (100 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR5[VAR15 + VAR10 / sizeof(char)] = '';
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
static void FUN11(char * VAR5)
{
 if(VAR3)
 {
 FUN3("", VAR5);
 }
}
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
 size_t VAR15 = strlen(VAR5);
 do
 {
#ifdef VAR7
 if (FUN5(FUN6(2,2), &VAR8) != VAR16)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR17, VAR18, VAR19);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN7(VAR23);
 VAR11.VAR24 = FUN8(VAR25);
 if (connect(VAR13, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR13, (char *)(VAR5 + VAR15), sizeof(char) * (100 - VAR15 - 1), 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR5[VAR15 + VAR10 / sizeof(char)] = '';
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
static void FUN13(char * VAR5)
{
 if(VAR4)
 {
 FUN3(VAR5);
 }
}
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
 FUN4();
 FUN12();
 FUN14();
}
#endif
