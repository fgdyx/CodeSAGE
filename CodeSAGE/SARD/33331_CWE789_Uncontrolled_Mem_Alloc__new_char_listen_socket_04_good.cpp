#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 SOCKET VAR11 = VAR10;
 char VAR12[VAR13];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR14)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR9 = socket(VAR15, VAR16, VAR17);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR18 = VAR15;
 VAR8.VAR19.VAR20 = VAR21;
 VAR8.VAR22 = FUN4(VAR23);
 if (FUN5(VAR9, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
 {
 break;
 }
 if (FUN6(VAR9, VAR26) == VAR25)
 {
 break;
 }
 VAR11 = FUN7(VAR9, NULL, NULL);
 if (VAR11 == VAR25)
 {
 break;
 }
 VAR7 = recv(VAR11, VAR12, VAR13 - 1, 0);
 if (VAR7 == VAR25 || VAR7 == 0)
 {
 break;
 }
 VAR12[VAR7] = '';
 VAR2 = FUN8(VAR12, NULL, 0);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN9(VAR9);
 }
 if (VAR11 != VAR10)
 {
 FUN9(VAR11);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN10();
 }
#endif
 }
 }
 if(VAR27)
 {
 FUN11("");
 }
 else
 {
 {
 char * VAR28;
 if (VAR2 > strlen(VAR29) && VAR2 < 100)
 {
 VAR28 = new char[VAR2];
 strcpy(VAR28, VAR29);
 FUN11(VAR28);
 delete [] VAR28;
 }
 else
 {
 FUN11("");
 }
 }
 }
}
static void FUN12()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 SOCKET VAR11 = VAR10;
 char VAR12[VAR13];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR14)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR9 = socket(VAR15, VAR16, VAR17);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR18 = VAR15;
 VAR8.VAR19.VAR20 = VAR21;
 VAR8.VAR22 = FUN4(VAR23);
 if (FUN5(VAR9, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
 {
 break;
 }
 if (FUN6(VAR9, VAR26) == VAR25)
 {
 break;
 }
 VAR11 = FUN7(VAR9, NULL, NULL);
 if (VAR11 == VAR25)
 {
 break;
 }
 VAR7 = recv(VAR11, VAR12, VAR13 - 1, 0);
 if (VAR7 == VAR25 || VAR7 == 0)
 {
 break;
 }
 VAR12[VAR7] = '';
 VAR2 = FUN8(VAR12, NULL, 0);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN9(VAR9);
 }
 if (VAR11 != VAR10)
 {
 FUN9(VAR11);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN10();
 }
#endif
 }
 }
 if(VAR3)
 {
 {
 char * VAR28;
 if (VAR2 > strlen(VAR29) && VAR2 < 100)
 {
 VAR28 = new char[VAR2];
 strcpy(VAR28, VAR29);
 FUN11(VAR28);
 delete [] VAR28;
 }
 else
 {
 FUN11("");
 }
 }
 }
}
static void FUN13()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR27)
 {
 FUN11("");
 }
 else
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 char * VAR28;
 if (VAR2 > strlen(VAR29))
 {
 VAR28 = new char[VAR2];
 strcpy(VAR28, VAR29);
 FUN11(VAR28);
 delete [] VAR28;
 }
 else
 {
 FUN11("");
 }
 }
 }
}
static void FUN14()
{
 size_t VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = 20;
 }
 if(VAR3)
 {
 {
 char * VAR28;
 if (VAR2 > strlen(VAR29))
 {
 VAR28 = new char[VAR2];
 strcpy(VAR28, VAR29);
 FUN11(VAR28);
 delete [] VAR28;
 }
 else
 {
 FUN11("");
 }
 }
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
