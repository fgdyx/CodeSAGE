#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 FUN2(100 / VAR2);
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2 = VAR4;
 if( VAR2 != 0 )
 {
 FUN2(100 / VAR2);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
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
 VAR2 = FUN11(VAR12);
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
 VAR4 = VAR2;
 FUN4();
}
void FUN14()
{
 FUN3();
 FUN6();
}
#endif
