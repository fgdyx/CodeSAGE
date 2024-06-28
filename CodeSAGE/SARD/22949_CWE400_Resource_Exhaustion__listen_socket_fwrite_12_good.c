#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 SOCKET VAR10 = VAR9;
 char VAR11[VAR12];
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR4) != VAR13)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR14, VAR15, VAR16);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR17 = VAR14;
 VAR7.VAR18.VAR19 = VAR20;
 VAR7.VAR21 = FUN5(VAR22);
 if (FUN6(VAR8, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
 {
 break;
 }
 if (FUN7(VAR8, VAR25) == VAR24)
 {
 break;
 }
 VAR10 = FUN8(VAR8, NULL, NULL);
 if (VAR10 == VAR24)
 {
 break;
 }
 VAR6 = recv(VAR10, VAR11, VAR12 - 1, 0);
 if (VAR6 == VAR24 || VAR6 == 0)
 {
 break;
 }
 VAR11[VAR6] = '';
 VAR2 = FUN9(VAR11);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN10(VAR8);
 }
 if (VAR10 != VAR9)
 {
 FUN10(VAR10);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN11();
 }
#endif
 }
 }
 else
 {
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 SOCKET VAR10 = VAR9;
 char VAR11[VAR12];
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR4) != VAR13)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR14, VAR15, VAR16);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR17 = VAR14;
 VAR7.VAR18.VAR19 = VAR20;
 VAR7.VAR21 = FUN5(VAR22);
 if (FUN6(VAR8, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
 {
 break;
 }
 if (FUN7(VAR8, VAR25) == VAR24)
 {
 break;
 }
 VAR10 = FUN8(VAR8, NULL, NULL);
 if (VAR10 == VAR24)
 {
 break;
 }
 VAR6 = recv(VAR10, VAR11, VAR12 - 1, 0);
 if (VAR6 == VAR24 || VAR6 == 0)
 {
 break;
 }
 VAR11[VAR6] = '';
 VAR2 = FUN9(VAR11);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN10(VAR8);
 }
 if (VAR10 != VAR9)
 {
 FUN10(VAR10);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN11();
 }
#endif
 }
 }
 if(FUN2())
 {
 {
 size_t VAR26 = 0;
 VAR27 *VAR28 = NULL;
 const char *VAR29 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR28 = fopen(VAR29, "");
 if (VAR28 == NULL)
 {
 FUN12(1);
 }
 for (VAR26 = 0; VAR26 < (VAR30)VAR2; VAR26++)
 {
 if (strlen(VAR31) != fwrite(VAR31, sizeof(char), strlen(VAR31), VAR28)) FUN12(1);
 }
 if (VAR28)
 {
 fclose(VAR28);
 }
 }
 }
 }
 else
 {
 {
 size_t VAR26 = 0;
 VAR27 *VAR28 = NULL;
 const char *VAR29 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR28 = fopen(VAR29, "");
 if (VAR28 == NULL)
 {
 FUN12(1);
 }
 for (VAR26 = 0; VAR26 < (VAR30)VAR2; VAR26++)
 {
 if (strlen(VAR31) != fwrite(VAR31, sizeof(char), strlen(VAR31), VAR28)) FUN12(1);
 }
 if (VAR28)
 {
 fclose(VAR28);
 }
 }
 }
 }
}
static void FUN13()
{
 int VAR2;
 VAR2 = -1;
 if(FUN2())
 {
 VAR2 = 20;
 }
 else
 {
 VAR2 = 20;
 }
 if(FUN2())
 {
 {
 size_t VAR26 = 0;
 VAR27 *VAR28 = NULL;
 const char *VAR29 = "";
 VAR28 = fopen(VAR29, "");
 if (VAR28 == NULL)
 {
 FUN12(1);
 }
 for (VAR26 = 0; VAR26 < (VAR30)VAR2; VAR26++)
 {
 if (strlen(VAR31) != fwrite(VAR31, sizeof(char), strlen(VAR31), VAR28))
 {
 FUN12(1);
 }
 }
 if (VAR28)
 {
 fclose(VAR28);
 }
 }
 }
 else
 {
 {
 size_t VAR26 = 0;
 VAR27 *VAR28 = NULL;
 const char *VAR29 = "";
 VAR28 = fopen(VAR29, "");
 if (VAR28 == NULL)
 {
 FUN12(1);
 }
 for (VAR26 = 0; VAR26 < (VAR30)VAR2; VAR26++)
 {
 if (strlen(VAR31) != fwrite(VAR31, sizeof(char), strlen(VAR31), VAR28))
 {
 FUN12(1);
 }
 }
 if (VAR28)
 {
 fclose(VAR28);
 }
 }
 }
}
void FUN14()
{
 FUN1();
 FUN13();
}
#endif
