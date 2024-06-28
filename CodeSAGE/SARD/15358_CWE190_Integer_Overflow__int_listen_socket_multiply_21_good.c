#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(int VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if(VAR5 > 0)
 {
 if (VAR5 < (VAR6/2))
 {
 int VAR7 = VAR5 * 2;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 int VAR5;
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
 if (FUN5(FUN6(2,2), &VAR9) != VAR18)
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
 VAR12.VAR26 = FUN7(VAR27);
 if (FUN8(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN9(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN10(VAR13, NULL, NULL);
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
 VAR5 = FUN11(VAR16);
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
#ifdef VAR8
 if (VAR10)
 {
 FUN13();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN14(int VAR5)
{
 if(VAR3)
 {
 if(VAR5 > 0)
 {
 if (VAR5 < (VAR6/2))
 {
 int VAR7 = VAR5 * 2;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN15()
{
 int VAR5;
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
 if (FUN5(FUN6(2,2), &VAR9) != VAR18)
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
 VAR12.VAR26 = FUN7(VAR27);
 if (FUN8(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN9(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN10(VAR13, NULL, NULL);
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
 VAR5 = FUN11(VAR16);
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
#ifdef VAR8
 if (VAR10)
 {
 FUN13();
 }
#endif
 }
 VAR3 = 1;
 FUN14(VAR5);
}
static void FUN16(int VAR5)
{
 if(VAR4)
 {
 if(VAR5 > 0)
 {
 int VAR7 = VAR5 * 2;
 FUN3(VAR7);
 }
 }
}
static void FUN17()
{
 int VAR5;
 VAR5 = 0;
 VAR5 = 2;
 VAR4 = 1;
 FUN16(VAR5);
}
void FUN18()
{
 FUN4();
 FUN15();
 FUN17();
}
#endif
