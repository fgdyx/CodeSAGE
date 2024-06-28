#ifndef VAR1
static void FUN1(int &VAR2)
{
 VAR2 = 20;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 FUN3(VAR2);
 FUN4("");
}
static void FUN5(int &VAR2)
{
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 char VAR10[VAR11];
 do
 {
#ifdef VAR3
 if (FUN6(FUN7(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR13, VAR14, VAR15);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN8(VAR19);
 VAR7.VAR20 = FUN9(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = FUN10(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN11(VAR8);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN12();
 }
#endif
 }
}
static void FUN13()
{
 int VAR2;
 VAR2 = -1;
 FUN5(VAR2);
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN3(VAR2);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
}
void FUN14()
{
 FUN2();
 FUN13();
}
#endif
