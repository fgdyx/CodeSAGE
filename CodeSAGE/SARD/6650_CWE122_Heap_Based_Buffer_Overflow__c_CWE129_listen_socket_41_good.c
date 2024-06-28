#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
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
 free(VAR4);
 }
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 FUN1(VAR2);
}
static void FUN5(int VAR2)
{
 {
 int VAR3;
 int * VAR4 = (int *)malloc(10 * sizeof(int));
 for (VAR3 = 0; VAR3 < 10; VAR3++)
 {
 VAR4[VAR3] = 0;
 }
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
 free(VAR4);
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
 SOCKET VAR12 = VAR11;
 char VAR13[VAR14];
 do
 {
#ifdef VAR5
 if (FUN7(FUN8(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR10 = socket(VAR16, VAR17, VAR18);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN9(VAR24);
 if (FUN10(VAR10, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN11(VAR10, VAR27) == VAR26)
 {
 break;
 }
 VAR12 = FUN12(VAR10, NULL, NULL);
 if (VAR12 == VAR26)
 {
 break;
 }
 VAR8 = recv(VAR12, VAR13, VAR14 - 1, 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR13[VAR8] = '';
 VAR2 = FUN13(VAR13);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN14(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN14(VAR12);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN15();
 }
#endif
 }
 FUN5(VAR2);
}
void FUN16()
{
 FUN6();
 FUN4();
}
#endif
