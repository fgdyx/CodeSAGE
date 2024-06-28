#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 char VAR10[VAR11];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 /* POTENTIAL FLAW: Read count using a connect socket */
 VAR8 = socket(VAR13, VAR14, VAR15);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = FUN6(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN7(VAR8);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN8();
 }
#endif
 }
 {
 int VAR24 = VAR2;
 int VAR2 = VAR24;
 {
 size_t VAR25 = 0;
 VAR26 *VAR27 = NULL;
 const char *VAR28 = "";
 VAR27 = fopen(VAR28, "");
 if (VAR27 == NULL)
 {
 FUN9(1);
 }
 /* POTENTIAL FLAW: For loop using count as the loop variant and no validation
 * This can cause a file to become very large */
 for (VAR25 = 0; VAR25 < (VAR29)VAR2; VAR25++)
 {
 if (strlen(VAR30) != fwrite(VAR30, sizeof(char), strlen(VAR30), VAR27))
 {
 FUN9(1);
 }
 }
 if (VAR27)
 {
 fclose(VAR27);
 }
 }
 }
}
#endif
