#ifndef VAR1
void FUN1(CWE123_Write_What_Where_Condition__listen_socket_67_structType VAR2);
void FUN2()
{
 badStruct VAR3;
 CWE123_Write_What_Where_Condition__listen_socket_67_structType VAR2;
 linkedList VAR4 = { &VAR4, &VAR4 };
 VAR3.VAR5.VAR6 = VAR4.VAR6;
 VAR3.VAR5.VAR7 = VAR4.VAR7;
 VAR4.VAR6 = &VAR3.VAR5;
 VAR4.VAR7 = &VAR3.VAR5;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 do
 {
#ifdef VAR8
 if (FUN3(FUN4(2,2), &VAR9) != VAR16)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR17, VAR18, VAR19);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR20 = VAR17;
 VAR12.VAR21.VAR22 = VAR23;
 VAR12.VAR24 = FUN5(VAR25);
 if (FUN6(VAR13, (struct VAR26*)&VAR12, sizeof(VAR12)) == VAR27)
 {
 break;
 }
 if (FUN7(VAR13, VAR28) == VAR27)
 {
 break;
 }
 VAR15 = FUN8(VAR13, NULL, NULL);
 if (VAR15 == VAR27)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR11 = recv(VAR15, (char*)&VAR3, sizeof(VAR3), 0);
 if (VAR11 == VAR27 || VAR11 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN9(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN9(VAR15);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN10();
 }
#endif
 }
 VAR2.VAR29 = VAR3;
 FUN1(VAR2);
}
#endif
