#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 VAR2 = 20;
 {
 size_t VAR2 = VAR4;
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6))
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
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
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 char VAR15[VAR16];
 do
 {
#ifdef VAR7
 if (FUN4(FUN5(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR18, VAR19, VAR20);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN6(VAR26);
 if (FUN7(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN8(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN9(VAR12, NULL, NULL);
 if (VAR14 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR14, VAR15, VAR16 - 1, 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR15[VAR10] = '';
 VAR2 = FUN10(VAR15, NULL, 0);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN11(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN11(VAR14);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN12();
 }
#endif
 }
 {
 size_t VAR2 = VAR4;
 {
 char * VAR5;
 if (VAR2 > strlen(VAR6) && VAR2 < 100)
 {
 VAR5 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN13()
{
 FUN1();
 FUN3();
}
#endif
