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
 SOCKET VAR15 = VAR14;
 size_t VAR16 = strlen(VAR5);
 do
 {
#ifdef VAR7
 if (FUN5(FUN6(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN7(VAR26);
 if (FUN8(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN9(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN10(VAR13, NULL, NULL);
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
 FUN11(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN11(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN12();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN13(char * VAR5)
{
 if(VAR3)
 {
 FUN3("", VAR5);
 }
}
static void FUN14()
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
 if (FUN5(FUN6(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN7(VAR26);
 if (FUN8(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN9(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN10(VAR13, NULL, NULL);
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
 FUN11(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN11(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN12();
 }
#endif
 }
 VAR3 = 1;
 FUN13(VAR5);
}
static void FUN15(char * VAR5)
{
 if(VAR4)
 {
 FUN3(VAR5);
 }
}
static void FUN16()
{
 char * VAR5;
 char VAR6[100] = "";
 VAR5 = VAR6;
 strcpy(VAR5, "");
 VAR4 = 1;
 FUN15(VAR5);
}
void FUN17()
{
 FUN4();
 FUN14();
 FUN16();
}
#endif
