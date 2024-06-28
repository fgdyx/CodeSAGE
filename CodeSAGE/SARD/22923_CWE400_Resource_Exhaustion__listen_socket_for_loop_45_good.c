#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 size_t VAR4 = 0;
 for (VAR4 = 0; VAR4 < (VAR5)VAR2; VAR4++)
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 20;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int VAR2 = VAR6;
 {
 size_t VAR4 = 0;
 if (VAR2 > 0 && VAR2 <= 20)
 {
 for (VAR4 = 0; VAR4 < (VAR5)VAR2; VAR4++)
 {
 FUN2("");
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
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
 if (FUN6(FUN7(2,2), &VAR8) != VAR17)
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
 VAR11.VAR25 = FUN8(VAR26);
 if (FUN9(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN10(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN11(VAR12, NULL, NULL);
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
 VAR2 = FUN12(VAR15);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN13(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN13(VAR14);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN14();
 }
#endif
 }
 VAR6 = VAR2;
 FUN4();
}
void FUN15()
{
 FUN3();
 FUN5();
}
#endif
