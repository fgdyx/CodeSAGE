#ifndef VAR1
void FUN1(CWE369_Divide_by_Zero__float_connect_socket_67_structType VAR2);
static void FUN2()
{
 float VAR3;
 CWE369_Divide_by_Zero__float_connect_socket_67_structType VAR2;
 VAR3 = 0.0F;
 VAR3 = 2.0F;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE369_Divide_by_Zero__float_connect_socket_67_structType VAR2);
static void FUN4()
{
 float VAR3;
 CWE369_Divide_by_Zero__float_connect_socket_67_structType VAR2;
 VAR3 = 0.0F;
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
 if (FUN5(FUN6(2,2), &VAR6) != VAR14)
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
 VAR9.VAR19.VAR20 = FUN7(VAR21);
 VAR9.VAR22 = FUN8(VAR23);
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
 VAR3 = (float)FUN9(VAR12);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN10(VAR10);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN11();
 }
#endif
 }
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN12()
{
 FUN2();
 FUN4();
}
#endif
