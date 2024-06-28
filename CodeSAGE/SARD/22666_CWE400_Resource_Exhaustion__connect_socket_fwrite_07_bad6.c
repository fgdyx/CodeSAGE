#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(VAR3==5)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 char VAR11[VAR12];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 /* POTENTIAL FLAW: Read count using a connect socket */
 VAR9 = socket(VAR14, VAR15, VAR16);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN4(VAR20);
 VAR8.VAR21 = FUN5(VAR22);
 if (connect(VAR9, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR9, VAR11, VAR12 - 1, 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR11[VAR7] = '';
 VAR2 = FUN6(VAR11);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN7(VAR9);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN8();
 }
#endif
 }
 }
 if(VAR3==5)
 {
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
