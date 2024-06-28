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
 SOCKET VAR11 = VAR10;
 char VAR12[VAR13];
 do
 {
#ifdef VAR4
 if (FUN5(FUN6(2,2), &VAR5) != VAR14)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR9 = socket(VAR15, VAR16, VAR17);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR18 = VAR15;
 VAR8.VAR19.VAR20 = VAR21;
 VAR8.VAR22 = FUN7(VAR23);
 if (FUN8(VAR9, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
 {
 break;
 }
 if (FUN9(VAR9, VAR26) == VAR25)
 {
 break;
 }
 VAR11 = FUN10(VAR9, NULL, NULL);
 if (VAR11 == VAR25)
 {
 break;
 }
 VAR7 = recv(VAR11, VAR12, VAR13 - 1, 0);
 if (VAR7 == VAR25 || VAR7 == 0)
 {
 break;
 }
 VAR12[VAR7] = '';
 VAR2 = FUN11(VAR12);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN12(VAR9);
 }
 if (VAR11 != VAR10)
 {
 FUN12(VAR11);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN13();
 }
#endif
 }
 return VAR2;
}
static void FUN14()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = FUN4(VAR2);
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR27/2))
 {
 int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 else
 {
 FUN15("");
 }
 }
}
void FUN16()
{
 FUN14();
 FUN2();
}
#endif
