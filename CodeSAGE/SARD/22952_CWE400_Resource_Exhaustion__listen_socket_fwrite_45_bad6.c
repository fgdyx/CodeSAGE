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
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation
 * This can cause a file to become very large */
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
void FUN3()
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
 SOCKET VAR17 = VAR16;
 char VAR18[VAR19];
 do
 {
#ifdef VAR10
 if (FUN4(FUN5(2,2), &VAR11) != VAR20)
 {
 break;
 }
 VAR12 = 1;
#endif
 /* POTENTIAL FLAW: Read count using a listen socket */
 VAR15 = socket(VAR21, VAR22, VAR23);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR24 = VAR21;
 VAR14.VAR25.VAR26 = VAR27;
 VAR14.VAR28 = FUN6(VAR29);
 if (FUN7(VAR15, (struct VAR30*)&VAR14, sizeof(VAR14)) == VAR31)
 {
 break;
 }
 if (FUN8(VAR15, VAR32) == VAR31)
 {
 break;
 }
 VAR17 = FUN9(VAR15, NULL, NULL);
 if (VAR17 == VAR31)
 {
 break;
 }
 VAR13 = recv(VAR17, VAR18, VAR19 - 1, 0);
 if (VAR13 == VAR31 || VAR13 == 0)
 {
 break;
 }
 VAR18[VAR13] = '';
 VAR2 = FUN10(VAR18);
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN11(VAR15);
 }
 if (VAR17 != VAR16)
 {
 FUN11(VAR17);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN12();
 }
#endif
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
