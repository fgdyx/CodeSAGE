#ifndef VAR1
static void FUN1()
{
 int VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_34_unionType VAR3;
 VAR2 = -1;
 VAR2 = 7;
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int VAR7[10] = { 0 };
 if (VAR2 >= 0)
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 int VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE129_listen_socket_34_unionType VAR3;
 VAR2 = -1;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 char VAR16[VAR17];
 do
 {
#ifdef VAR8
 if (FUN5(FUN6(2,2), &VAR9) != VAR18)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR19, VAR20, VAR21);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN7(VAR27);
 if (FUN8(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN9(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN10(VAR13, NULL, NULL);
 if (VAR15 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR15, VAR16, VAR17 - 1, 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR16[VAR11] = '';
 VAR2 = FUN11(VAR16);
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN12(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN12(VAR15);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN13();
 }
#endif
 }
 VAR3.VAR4 = VAR2;
 {
 int VAR2 = VAR3.VAR5;
 {
 int VAR6;
 int VAR7[10] = { 0 };
 if (VAR2 >= 0 && VAR2 < (10))
 {
 VAR7[VAR2] = 1;
 for(VAR6 = 0; VAR6 < 10; VAR6++)
 {
 FUN2(VAR7[VAR6]);
 }
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN14()
{
 FUN1();
 FUN4();
}
#endif
