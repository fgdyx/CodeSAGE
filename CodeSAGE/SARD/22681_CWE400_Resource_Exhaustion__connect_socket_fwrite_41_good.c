#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN2(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5))
 {
 FUN2(1);
 }
 }
 if (VAR5)
 {
 fclose(VAR5);
 }
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 20;
 FUN1(VAR2);
}
static void FUN4(int VAR2)
{
 {
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN2(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5)) FUN2(1);
 }
 if (VAR5)
 {
 fclose(VAR5);
 }
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 SOCKET VAR14 = VAR15;
 char VAR16[VAR17];
 do
 {
#ifdef VAR9
 if (FUN6(FUN7(2,2), &VAR10) != VAR18)
 {
 break;
 }
 VAR11 = 1;
#endif
 VAR14 = socket(VAR19, VAR20, VAR21);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR22 = VAR19;
 VAR13.VAR23.VAR24 = FUN8(VAR25);
 VAR13.VAR26 = FUN9(VAR27);
 if (connect(VAR14, (struct VAR28*)&VAR13, sizeof(VAR13)) == VAR29)
 {
 break;
 }
 VAR12 = recv(VAR14, VAR16, VAR17 - 1, 0);
 if (VAR12 == VAR29 || VAR12 == 0)
 {
 break;
 }
 VAR16[VAR12] = '';
 VAR2 = FUN10(VAR16);
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN11(VAR14);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN12();
 }
#endif
 }
 FUN4(VAR2);
}
void FUN13()
{
 FUN5();
 FUN3();
}
#endif
