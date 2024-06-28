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
 switch(6)
 {
 case 6:
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
 if (FUN6(FUN7(2,2), &VAR7) != VAR16)
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
 VAR10.VAR24 = FUN8(VAR25);
 if (FUN9(VAR12, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN10(VAR12, VAR28) == VAR27)
 {
 break;
 }
 VAR14 = FUN11(VAR12, NULL, NULL);
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
 FUN12(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN12(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN13();
 }
#endif
 }
 break;
 default:
 FUN14("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN14("");
 break;
 default:
 FUN1(VAR2, VAR2);
 break;
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
 switch(6)
 {
 case 6:
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
 if (FUN6(FUN7(2,2), &VAR7) != VAR16)
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
 VAR10.VAR24 = FUN8(VAR25);
 if (FUN9(VAR12, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN10(VAR12, VAR28) == VAR27)
 {
 break;
 }
 VAR14 = FUN11(VAR12, NULL, NULL);
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
 FUN12(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN12(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN13();
 }
#endif
 }
 break;
 default:
 FUN14("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN15(VAR2, VAR2);
 break;
 default:
 FUN14("");
 break;
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
 switch(5)
 {
 case 6:
 FUN14("");
 break;
 default:
 strcpy(VAR2, "");
 break;
 }
 switch(7)
 {
 case 7:
 FUN17(VAR2, VAR2);
 break;
 default:
 FUN14("");
 break;
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
 switch(6)
 {
 case 6:
 strcpy(VAR2, "");
 break;
 default:
 FUN14("");
 break;
 }
 switch(7)
 {
 case 7:
 FUN19(VAR2, VAR2);
 break;
 default:
 FUN14("");
 break;
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
