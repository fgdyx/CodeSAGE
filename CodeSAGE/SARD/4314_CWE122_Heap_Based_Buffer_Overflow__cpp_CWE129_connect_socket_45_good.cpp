#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 int VAR4;
 int * VAR5 = new int[10];
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 if (VAR2 >= 0)
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN2(VAR5[VAR4]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR5;
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 VAR3 = VAR2;
 FUN1();
}
static void FUN5()
{
 int VAR2 = VAR6;
 {
 int VAR4;
 int * VAR5 = new int[10];
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR5[VAR4] = 0;
 }
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR5[VAR2] = 1;
 for(VAR4 = 0; VAR4 < 10; VAR4++)
 {
 FUN2(VAR5[VAR4]);
 }
 }
 else
 {
 FUN3("");
 }
 delete[] VAR5;
 }
}
static void FUN6()
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
 char VAR14[VAR15];
 do
 {
#ifdef VAR7
 if (FUN7(FUN8(2,2), &VAR8) != VAR16)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR17, VAR18, VAR19);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN9(VAR23);
 VAR11.VAR24 = FUN10(VAR25);
 if (connect(VAR12, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR12, VAR14, VAR15 - 1, 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR14[VAR10] = '';
 VAR2 = FUN11(VAR14);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN12(VAR12);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN13();
 }
#endif
 }
 VAR6 = VAR2;
 FUN5();
}
void FUN14()
{
 FUN4();
 FUN6();
}
#endif
