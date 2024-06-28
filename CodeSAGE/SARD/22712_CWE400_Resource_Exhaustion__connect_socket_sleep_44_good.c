#ifndef VAR1
static void FUN1(int VAR2)
{
 FUN2(VAR2);
 FUN3("");
}
static void FUN4()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 VAR2 = 20;
 FUN5(VAR2);
}
static void FUN6(int VAR2)
{
 if (VAR2 > 0 && VAR2 <= 2000)
 {
 FUN2(VAR2);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
}
static void FUN7()
{
 int VAR2;
 void (*VAR3) (int) = VAR5;
 VAR2 = -1;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 SOCKET VAR11 = VAR12;
 char VAR13[VAR14];
 do
 {
#ifdef VAR6
 if (FUN8(FUN9(2,2), &VAR7) != VAR15)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR11 = socket(VAR16, VAR17, VAR18);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR19 = VAR16;
 VAR10.VAR20.VAR21 = FUN10(VAR22);
 VAR10.VAR23 = FUN11(VAR24);
 if (connect(VAR11, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
 {
 break;
 }
 VAR9 = recv(VAR11, VAR13, VAR14 - 1, 0);
 if (VAR9 == VAR26 || VAR9 == 0)
 {
 break;
 }
 VAR13[VAR9] = '';
 VAR2 = FUN12(VAR13);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN13(VAR11);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN14();
 }
#endif
 }
 FUN5(VAR2);
}
void FUN15()
{
 FUN4();
 FUN7();
}
#endif
