#ifndef VAR1
static void FUN1(size_t VAR2)
{
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4))
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 FUN1(VAR2);
}
static void FUN4(size_t VAR2)
{
 {
 char * VAR3;
 if (VAR2 > strlen(VAR4) && VAR2 < 100)
 {
 VAR3 = (char *)malloc(VAR2*sizeof(char));
 strcpy(VAR3, VAR4);
 FUN2(VAR3);
 free(VAR3);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 char VAR12[VAR13];
 do
 {
#ifdef VAR5
 if (FUN6(FUN7(2,2), &VAR6) != VAR14)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR10 = socket(VAR15, VAR16, VAR17);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN8(VAR21);
 VAR9.VAR22 = FUN9(VAR23);
 if (connect(VAR10, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR10, VAR12, VAR13 - 1, 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR12[VAR8] = '';
 VAR2 = FUN10(VAR12, NULL, 0);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN11(VAR10);
 }
#ifdef VAR5
 if (VAR7)
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
