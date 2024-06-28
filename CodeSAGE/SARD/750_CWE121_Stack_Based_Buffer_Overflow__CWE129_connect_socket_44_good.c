#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0)
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN2(VAR4[VAR3]);
 }
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
 void (*VAR5) (int) = VAR6;
 VAR2 = -1;
 VAR2 = 7;
 FUN5(VAR2);
}
static void FUN6(int VAR2)
{
 {
 int VAR3;
 int VAR4[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR4[VAR2] = 1;
 for(VAR3 = 0; VAR3 < 10; VAR3++)
 {
 FUN2(VAR4[VAR3]);
 }
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
 void (*VAR5) (int) = VAR7;
 VAR2 = -1;
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
 if (FUN8(FUN9(2,2), &VAR9) != VAR17)
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
 VAR12.VAR22.VAR23 = FUN10(VAR24);
 VAR12.VAR25 = FUN11(VAR26);
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
 VAR2 = FUN12(VAR15);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN13(VAR13);
 }
#ifdef VAR8
 if (VAR10)
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
