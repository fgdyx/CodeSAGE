#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(size_t VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7) && VAR5 < 100)
 {
 VAR6 = new char[VAR5];
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 size_t VAR5;
 VAR5 = 0;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 char VAR16[VAR17];
 do
 {
#ifdef VAR8
 if (FUN4(FUN5(2,2), &VAR9) != VAR18)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR19, VAR20, VAR21);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN6(VAR27);
 if (FUN7(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN8(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN9(VAR13, NULL, NULL);
 if (VAR15 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR15, VAR16, VAR17 - 1, 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR16[VAR11] = '';
 VAR5 = FUN10(VAR16, NULL, 0);
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
#ifdef VAR8
 if (VAR10)
 {
 FUN12();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN13(size_t VAR5)
{
 if(VAR3)
 {
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7) && VAR5 < 100)
 {
 VAR6 = new char[VAR5];
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN14()
{
 size_t VAR5;
 VAR5 = 0;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 char VAR16[VAR17];
 do
 {
#ifdef VAR8
 if (FUN4(FUN5(2,2), &VAR9) != VAR18)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR19, VAR20, VAR21);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN6(VAR27);
 if (FUN7(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN8(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN9(VAR13, NULL, NULL);
 if (VAR15 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR15, VAR16, VAR17 - 1, 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR16[VAR11] = '';
 VAR5 = FUN10(VAR16, NULL, 0);
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
#ifdef VAR8
 if (VAR10)
 {
 FUN12();
 }
#endif
 }
 VAR3 = 1;
 FUN13(VAR5);
}
static void FUN15(size_t VAR5)
{
 if(VAR4)
 {
 {
 char * VAR6;
 if (VAR5 > strlen(VAR7))
 {
 VAR6 = new char[VAR5];
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN16()
{
 size_t VAR5;
 VAR5 = 0;
 VAR5 = 20;
 VAR4 = 1;
 FUN15(VAR5);
}
void FUN17()
{
 FUN3();
 FUN14();
 FUN16();
}
#endif
