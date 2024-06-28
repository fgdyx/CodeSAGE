#ifndef VAR1
void FUN1(VAR2<int> VAR3);
static void FUN2()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 VAR4 = 7;
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN1(VAR3);
}
void FUN5(VAR2<int> VAR3);
static void FUN6()
{
 int VAR4;
 VAR2<int> VAR3;
 VAR4 = -1;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 char VAR12[VAR13];
 do
 {
#ifdef VAR5
 if (FUN7(FUN8(2,2), &VAR6) != VAR14)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR10 = socket(VAR15, VAR16, VAR17);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN9(VAR21);
 VAR9.VAR22 = FUN10(VAR23);
 if (connect(VAR10, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR10, VAR12, VAR13 - 1, 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR12[VAR8] = '';
 VAR4 = FUN11(VAR12);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN12(VAR10);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN13();
 }
#endif
 }
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 VAR3.FUN3(VAR3.FUN4(), 1, VAR4);
 FUN5(VAR3);
}
void FUN14()
{
 FUN2();
 FUN6();
}
#endif
