#ifndef VAR1
static void FUN1()
{
 int VAR2 = VAR3;
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN2(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6))
 {
 FUN2(1);
 }
 }
 if (VAR6)
 {
 fclose(VAR6);
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
 int VAR2 = VAR10;
 {
 size_t VAR4 = 0;
 VAR5 *VAR6 = NULL;
 const char *VAR7 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 == NULL)
 {
 FUN2(1);
 }
 for (VAR4 = 0; VAR4 < (VAR8)VAR2; VAR4++)
 {
 if (strlen(VAR9) != fwrite(VAR9, sizeof(char), strlen(VAR9), VAR6)) FUN2(1);
 }
 if (VAR6)
 {
 fclose(VAR6);
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 {
#ifdef VAR11
 WSADATA VAR12;
 int VAR13 = 0;
#endif
 int VAR14;
 struct sockaddr_in VAR15;
 SOCKET VAR16 = VAR17;
 SOCKET VAR18 = VAR17;
 char VAR19[VAR20];
 do
 {
#ifdef VAR11
 if (FUN6(FUN7(2,2), &VAR12) != VAR21)
 {
 break;
 }
 VAR13 = 1;
#endif
 VAR16 = socket(VAR22, VAR23, VAR24);
 if (VAR16 == VAR17)
 {
 break;
 }
 memset(&VAR15, 0, sizeof(VAR15));
 VAR15.VAR25 = VAR22;
 VAR15.VAR26.VAR27 = VAR28;
 VAR15.VAR29 = FUN8(VAR30);
 if (FUN9(VAR16, (struct VAR31*)&VAR15, sizeof(VAR15)) == VAR32)
 {
 break;
 }
 if (FUN10(VAR16, VAR33) == VAR32)
 {
 break;
 }
 VAR18 = FUN11(VAR16, NULL, NULL);
 if (VAR18 == VAR32)
 {
 break;
 }
 VAR14 = recv(VAR18, VAR19, VAR20 - 1, 0);
 if (VAR14 == VAR32 || VAR14 == 0)
 {
 break;
 }
 VAR19[VAR14] = '';
 VAR2 = FUN12(VAR19);
 }
 while (0);
 if (VAR16 != VAR17)
 {
 FUN13(VAR16);
 }
 if (VAR18 != VAR17)
 {
 FUN13(VAR18);
 }
#ifdef VAR11
 if (VAR13)
 {
 FUN14();
 }
#endif
 }
 VAR10 = VAR2;
 FUN4();
}
void FUN15()
{
 FUN3();
 FUN5();
}
#endif
