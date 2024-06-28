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
 if (VAR5 > VAR6)
 {
 int VAR7 = VAR5 - 1;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
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
 char VAR15[VAR16];
 do
 {
#ifdef VAR8
 if (FUN5(FUN6(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN7(VAR24);
 VAR12.VAR25 = FUN8(VAR26);
 if (connect(VAR13, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR13, VAR15, VAR16 - 1, 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR15[VAR11] = '';
 VAR5 = FUN9(VAR15);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN10(VAR13);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN11();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN12(int VAR5)
{
 if(VAR3)
 {
 if (VAR5 > VAR6)
 {
 int VAR7 = VAR5 - 1;
 FUN3(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN13()
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
 char VAR15[VAR16];
 do
 {
#ifdef VAR8
 if (FUN5(FUN6(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN7(VAR24);
 VAR12.VAR25 = FUN8(VAR26);
 if (connect(VAR13, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR13, VAR15, VAR16 - 1, 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR15[VAR11] = '';
 VAR5 = FUN9(VAR15);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN10(VAR13);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN11();
 }
#endif
 }
 VAR3 = 1;
 FUN12(VAR5);
}
static void FUN14(int VAR5)
{
 if(VAR4)
 {
 {
 int VAR7 = VAR5 - 1;
 FUN3(VAR7);
 }
 }
}
static void FUN15()
{
 int VAR5;
 VAR5 = 0;
 VAR5 = -2;
 VAR4 = 1;
 FUN14(VAR5);
}
void FUN16()
{
 FUN4();
 FUN13();
 FUN15();
}
#endif
