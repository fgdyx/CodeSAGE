#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 VAR2 = 20;
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7))
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 char VAR15[VAR16];
 do
 {
#ifdef VAR8
 if (FUN4(FUN5(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN6(VAR24);
 VAR12.VAR25 = FUN7(VAR26);
 if (connect(VAR13, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR13, VAR15, VAR16 - 1, 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR15[VAR11] = '';
 VAR2 = FUN8(VAR15, NULL, 0);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN9(VAR13);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN10();
 }
#endif
 }
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 char * VAR6;
 if (VAR2 > strlen(VAR7) && VAR2 < 100)
 {
 VAR6 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN2("");
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
