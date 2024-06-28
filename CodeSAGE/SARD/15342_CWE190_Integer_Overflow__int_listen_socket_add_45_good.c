#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 int VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2 = VAR5;
 if (VAR2 < VAR6)
 {
 int VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = 0;
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
 if (FUN7(FUN8(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN9(VAR26);
 if (FUN10(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN11(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN12(VAR12, NULL, NULL);
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
 VAR2 = FUN13(VAR15);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN14(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN14(VAR14);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN15();
 }
#endif
 }
 VAR5 = VAR2;
 FUN4();
}
void FUN16()
{
 FUN3();
 FUN6();
}
#endif
