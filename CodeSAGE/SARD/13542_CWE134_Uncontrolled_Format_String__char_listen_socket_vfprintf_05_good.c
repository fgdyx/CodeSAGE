#ifndef VAR1
static void FUN1(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, "", VAR3);
 FUN4(VAR3);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6)
 {
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
 size_t VAR16 = strlen(VAR2);
 do
 {
#ifdef VAR7
 if (FUN6(FUN7(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN8(VAR26);
 if (FUN9(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN10(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN11(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR2 + VAR16), sizeof(char) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR10 / sizeof(char)] = '';
 VAR12 = strchr(VAR2, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 VAR12 = strchr(VAR2, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN12(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN12(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN13();
 }
#endif
 }
 }
 if(VAR30)
 {
 FUN14("");
 }
 else
 {
 FUN1(VAR2, VAR2);
 }
}
static void FUN15(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, "", VAR3);
 FUN4(VAR3);
 }
}
static void FUN16()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6)
 {
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
 size_t VAR16 = strlen(VAR2);
 do
 {
#ifdef VAR7
 if (FUN6(FUN7(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN8(VAR26);
 if (FUN9(VAR13, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN10(VAR13, VAR29) == VAR28)
 {
 break;
 }
 VAR15 = FUN11(VAR13, NULL, NULL);
 if (VAR15 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR15, (char *)(VAR2 + VAR16), sizeof(char) * (100 - VAR16 - 1), 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR10 / sizeof(char)] = '';
 VAR12 = strchr(VAR2, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 VAR12 = strchr(VAR2, '');
 if (VAR12)
 {
 *VAR12 = '';
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN12(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN12(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN13();
 }
#endif
 }
 }
 if(VAR6)
 {
 FUN15(VAR2, VAR2);
 }
}
static void FUN17(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN18()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR30)
 {
 FUN14("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(VAR6)
 {
 FUN17(VAR2, VAR2);
 }
}
static void FUN19(char * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 FUN3(VAR4, VAR2, VAR3);
 FUN4(VAR3);
 }
}
static void FUN20()
{
 char * VAR2;
 char VAR5[100] = "";
 VAR2 = VAR5;
 if(VAR6)
 {
 strcpy(VAR2, "");
 }
 if(VAR6)
 {
 FUN19(VAR2, VAR2);
 }
}
void FUN21()
{
 FUN18();
 FUN20();
 FUN5();
 FUN16();
}
#endif
