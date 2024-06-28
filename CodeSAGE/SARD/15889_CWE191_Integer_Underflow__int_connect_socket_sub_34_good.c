#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE191_Integer_Underflow__int_connect_socket_sub_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = -2;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6 = VAR2 - 1;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 int VAR2;
 CWE191_Integer_Underflow__int_connect_socket_sub_34_unionType VAR3;
 VAR2 = 0;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 char VAR14[VAR15];
 do
 {
#ifdef VAR7
 if (FUN4(FUN5(2,2), &VAR8) != VAR16)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR17, VAR18, VAR19);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN6(VAR23);
 VAR11.VAR24 = FUN7(VAR25);
 if (connect(VAR12, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR12, VAR14, VAR15 - 1, 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR14[VAR10] = '';
 VAR2 = FUN8(VAR14);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN9(VAR12);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN10();
 }
#endif
 }
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 if (VAR2 > VAR28)
 {
 int VAR6 = VAR2 - 1;
 FUN2(VAR6);
 }
 else
 {
 FUN11("");
 }
 }
}
void FUN12()
{
 FUN1();
 FUN3();
}
#endif
