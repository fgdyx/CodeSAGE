#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 if (VAR2 < 10)
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4()
{
 int VAR2;
 void (*VAR4) (int) = VAR5;
 VAR2 = -1;
 VAR2 = 7;
 FUN5(VAR2);
}
static void FUN6(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 void (*VAR4) (int) = VAR6;
 VAR2 = -1;
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
 if (FUN8(FUN9(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN10(VAR26);
 if (FUN11(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN12(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN13(VAR12, NULL, NULL);
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
 VAR2 = FUN14(VAR15);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN15(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN15(VAR14);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN16();
 }
#endif
 }
 FUN5(VAR2);
}
void FUN17()
{
 FUN4();
 FUN7();
}
#endif
