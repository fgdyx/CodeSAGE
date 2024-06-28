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
 {
 int VAR6[10] = { 0 };
 if (VAR5 >= 0 && VAR5 < (10))
 {
 FUN3(VAR6[VAR5]);
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
 VAR5 = -1;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 char VAR15[VAR16];
 do
 {
#ifdef VAR7
 if (FUN5(FUN6(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR18, VAR19, VAR20);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN7(VAR26);
 if (FUN8(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN9(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN10(VAR12, NULL, NULL);
 if (VAR14 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR14, VAR15, VAR16 - 1, 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR15[VAR10] = '';
 VAR5 = FUN11(VAR15);
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
#ifdef VAR7
 if (VAR9)
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
 {
 int VAR6[10] = { 0 };
 if (VAR5 >= 0 && VAR5 < (10))
 {
 FUN3(VAR6[VAR5]);
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
 VAR5 = -1;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 char VAR15[VAR16];
 do
 {
#ifdef VAR7
 if (FUN5(FUN6(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR18, VAR19, VAR20);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN7(VAR26);
 if (FUN8(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN9(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN10(VAR12, NULL, NULL);
 if (VAR14 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR14, VAR15, VAR16 - 1, 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR15[VAR10] = '';
 VAR5 = FUN11(VAR15);
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
#ifdef VAR7
 if (VAR9)
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
 {
 int VAR6[10] = { 0 };
 if (VAR5 >= 0)
 {
 FUN3(VAR6[VAR5]);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN17()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 7;
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
