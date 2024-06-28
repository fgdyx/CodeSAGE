#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 char *VAR9;
 SOCKET VAR10 = VAR11;
 size_t VAR12 = strlen(VAR2);
 do
 {
#ifdef VAR4
 if (FUN3(FUN4(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR10 = socket(VAR14, VAR15, VAR16);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN5(VAR20);
 VAR8.VAR21 = FUN6(VAR22);
 if (connect(VAR10, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR10, (char *)(VAR2 + VAR12), sizeof(char) * (100 - VAR12 - 1), 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR2[VAR12 + VAR7 / sizeof(char)] = '';
 VAR9 = strchr(VAR2, '');
 if (VAR9)
 {
 *VAR9 = '';
 }
 VAR9 = strchr(VAR2, '');
 if (VAR9)
 {
 *VAR9 = '';
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN7(VAR10);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN8();
 }
#endif
 }
 }
 if(FUN9())
 {
 FUN10("");
 }
 else
 {
 FUN11("", VAR2);
 }
}
static void FUN12()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 char *VAR9;
 SOCKET VAR10 = VAR11;
 size_t VAR12 = strlen(VAR2);
 do
 {
#ifdef VAR4
 if (FUN3(FUN4(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR10 = socket(VAR14, VAR15, VAR16);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN5(VAR20);
 VAR8.VAR21 = FUN6(VAR22);
 if (connect(VAR10, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR10, (char *)(VAR2 + VAR12), sizeof(char) * (100 - VAR12 - 1), 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR2[VAR12 + VAR7 / sizeof(char)] = '';
 VAR9 = strchr(VAR2, '');
 if (VAR9)
 {
 *VAR9 = '';
 }
 VAR9 = strchr(VAR2, '');
 if (VAR9)
 {
 *VAR9 = '';
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN7(VAR10);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN8();
 }
#endif
 }
 }
 if(FUN2())
 {
 FUN11("", VAR2);
 }
}
static void FUN13()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN9())
 {
 FUN10("");
 }
 else
 {
 strcpy(VAR2, "");
 }
 if(FUN2())
 {
 FUN11(VAR2);
 }
}
static void FUN14()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 strcpy(VAR2, "");
 }
 if(FUN2())
 {
 FUN11(VAR2);
 }
}
void FUN15()
{
 FUN1();
 FUN12();
 FUN13();
 FUN14();
}
#endif
