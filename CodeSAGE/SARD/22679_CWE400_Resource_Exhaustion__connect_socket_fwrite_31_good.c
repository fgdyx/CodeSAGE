#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 20;
 {
 int VAR3 = VAR2;
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
}
static void FUN3()
{
 int VAR2;
 VAR2 = -1;
 {
#ifdef VAR10
 WSADATA VAR11;
 int VAR12 = 0;
#endif
 int VAR13;
 struct sockaddr_in VAR14;
 SOCKET VAR15 = VAR16;
 char VAR17[VAR18];
 do
 {
#ifdef VAR10
 if (FUN4(FUN5(2,2), &VAR11) != VAR19)
 {
 break;
 }
 VAR12 = 1;
#endif
 VAR15 = socket(VAR20, VAR21, VAR22);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR23 = VAR20;
 VAR14.VAR24.VAR25 = FUN6(VAR26);
 VAR14.VAR27 = FUN7(VAR28);
 if (connect(VAR15, (struct VAR29*)&VAR14, sizeof(VAR14)) == VAR30)
 {
 break;
 }
 VAR13 = recv(VAR15, VAR17, VAR18 - 1, 0);
 if (VAR13 == VAR30 || VAR13 == 0)
 {
 break;
 }
 VAR17[VAR13] = '';
 VAR2 = FUN8(VAR17);
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN9(VAR15);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN10();
 }
#endif
 }
 {
 int VAR3 = VAR2;
 int VAR2 = VAR3;
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
}
void FUN11()
{
 FUN1();
 FUN3();
}
#endif
