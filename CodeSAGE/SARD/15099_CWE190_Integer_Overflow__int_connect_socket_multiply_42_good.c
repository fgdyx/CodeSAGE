#ifndef VAR1
static int FUN1(int VAR2)
{
 VAR2 = 2;
 return VAR2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 if(VAR2 > 0)
 {
 int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
}
static int FUN4(int VAR2)
{
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 char VAR11[VAR12];
 do
 {
#ifdef VAR4
 if (FUN5(FUN6(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR9 = socket(VAR14, VAR15, VAR16);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN7(VAR20);
 VAR8.VAR21 = FUN8(VAR22);
 if (connect(VAR9, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR9, VAR11, VAR12 - 1, 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR11[VAR7] = '';
 VAR2 = FUN9(VAR11);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN10(VAR9);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN11();
 }
#endif
 }
 return VAR2;
}
static void FUN12()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN4(VAR2);
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR25/2))
 {
 int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 else
 {
 FUN13("");
 }
 }
}
void FUN14()
{
 FUN12();
 FUN2();
}
#endif
