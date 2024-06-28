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
 void (*VAR5) (VAR6) = VAR7;
 VAR2 = 0;
 VAR2 = 20;
 FUN4(VAR2);
}
static void FUN5(size_t VAR2)
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
static void FUN6()
{
 size_t VAR2;
 void (*VAR5) (VAR6) = VAR8;
 VAR2 = 0;
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
 if (FUN7(FUN8(2,2), &VAR10) != VAR18)
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
 VAR13.VAR23.VAR24 = FUN9(VAR25);
 VAR13.VAR26 = FUN10(VAR27);
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
 VAR2 = FUN11(VAR16, NULL, 0);
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN12(VAR14);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN13();
 }
#endif
 }
 FUN4(VAR2);
}
void FUN14()
{
 FUN3();
 FUN6();
}
#endif
