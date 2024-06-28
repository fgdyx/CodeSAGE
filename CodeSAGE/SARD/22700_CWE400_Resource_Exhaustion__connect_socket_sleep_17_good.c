#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 int VAR4;
 VAR4 = -1;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
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
 if (FUN2(FUN3(2,2), &VAR6) != VAR14)
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
 VAR9.VAR19.VAR20 = FUN4(VAR21);
 VAR9.VAR22 = FUN5(VAR23);
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
 VAR4 = FUN6(VAR12);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN7(VAR10);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN8();
 }
#endif
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 if (VAR4 > 0 && VAR4 <= 2000)
 {
 FUN9(VAR4);
 FUN10("");
 }
 else
 {
 FUN10("");
 }
 }
}
static void FUN11()
{
 int VAR26,VAR27;
 int VAR4;
 VAR4 = -1;
 for(VAR26 = 0; VAR26 < 1; VAR26++)
 {
 VAR4 = 20;
 }
 for(VAR27 = 0; VAR27 < 1; VAR27++)
 {
 FUN9(VAR4);
 FUN10("");
 }
}
void FUN12()
{
 FUN1();
 FUN11();
}
#endif
