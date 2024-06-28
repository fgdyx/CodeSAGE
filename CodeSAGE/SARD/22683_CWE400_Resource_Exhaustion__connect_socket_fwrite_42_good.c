#ifndef VAR1
static int FUN1(int VAR2)
{
 VAR2 = 20;
 return VAR2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 {
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN3(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5))
 {
 FUN3(1);
 }
 }
 if (VAR5)
 {
 fclose(VAR5);
 }
 }
}
static int FUN4(int VAR2)
{
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
 if (FUN5(FUN6(2,2), &VAR10) != VAR18)
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
 VAR13.VAR23.VAR24 = FUN7(VAR25);
 VAR13.VAR26 = FUN8(VAR27);
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
 VAR2 = FUN9(VAR16);
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN10(VAR14);
 }
#ifdef VAR9
 if (VAR11)
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
 VAR2 = -1;
 VAR2 = FUN4(VAR2);
 {
 size_t VAR3 = 0;
 VAR4 *VAR5 = NULL;
 const char *VAR6 = "";
 if (VAR2 > 0 && VAR2 <= 20)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 == NULL)
 {
 FUN3(1);
 }
 for (VAR3 = 0; VAR3 < (VAR7)VAR2; VAR3++)
 {
 if (strlen(VAR8) != fwrite(VAR8, sizeof(char), strlen(VAR8), VAR5)) FUN3(1);
 }
 if (VAR5)
 {
 fclose(VAR5);
 }
 }
 }
}
void FUN13()
{
 FUN12();
 FUN2();
}
#endif
