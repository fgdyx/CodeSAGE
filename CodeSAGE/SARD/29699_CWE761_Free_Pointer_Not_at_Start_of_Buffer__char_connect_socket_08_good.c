#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
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
 if(FUN8())
 {
 FUN9("");
 }
 else
 {
 {
 size_t VAR24;
 for (VAR24=0; VAR24 < strlen(VAR2); VAR24++)
 {
 if (VAR2[VAR24] == VAR25)
 {
 FUN9("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
static void FUN10()
{
 char * VAR2;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
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
 if(FUN11())
 {
 {
 size_t VAR24;
 for (VAR24=0; VAR24 < strlen(VAR2); VAR24++)
 {
 if (VAR2[VAR24] == VAR25)
 {
 FUN9("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
void FUN12()
{
 FUN1();
 FUN10();
}
#endif
