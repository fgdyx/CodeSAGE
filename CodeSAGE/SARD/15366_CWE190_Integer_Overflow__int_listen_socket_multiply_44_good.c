#ifndef VAR1
static void FUN1(int VAR2)
{
 if(VAR2 > 0)
 {
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 void (*VAR4) (int) = VAR5;
 VAR2 = 0;
 VAR2 = 2;
 FUN4(VAR2);
}
static void FUN5(int VAR2)
{
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR6/2))
 {
 int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
}
static void FUN7()
{
 int VAR2;
 void (*VAR4) (int) = VAR7;
 VAR2 = 0;
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
 if (FUN8(FUN9(2,2), &VAR9) != VAR18)
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
 VAR12.VAR26 = FUN10(VAR27);
 if (FUN11(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN12(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN13(VAR13, NULL, NULL);
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
 VAR2 = FUN14(VAR16);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN15(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN15(VAR15);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN16();
 }
#endif
 }
 FUN4(VAR2);
}
void FUN17()
{
 FUN3();
 FUN7();
}
#endif
