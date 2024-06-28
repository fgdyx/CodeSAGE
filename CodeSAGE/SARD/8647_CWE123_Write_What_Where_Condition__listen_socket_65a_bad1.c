#ifndef VAR1
void FUN1(badStruct VAR2);
void FUN2()
{
 badStruct VAR2;
 void (*VAR3) (VAR4) = VAR5;
 linkedList VAR6 = { &VAR6, &VAR6 };
 VAR2.VAR7.VAR8 = VAR6.VAR8;
 VAR2.VAR7.VAR9 = VAR6.VAR9;
 VAR6.VAR8 = &VAR2.VAR7;
 VAR6.VAR9 = &VAR2.VAR7;
 {
#ifdef VAR10
 WSADATA VAR11;
 int VAR12 = 0;
#endif
 int VAR13;
 struct sockaddr_in VAR14;
 SOCKET VAR15 = VAR16;
 SOCKET VAR17 = VAR16;
 do
 {
#ifdef VAR10
 if (FUN3(FUN4(2,2), &VAR11) != VAR18)
 {
 break;
 }
 VAR12 = 1;
#endif
 VAR15 = socket(VAR19, VAR20, VAR21);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR22 = VAR19;
 VAR14.VAR23.VAR24 = VAR25;
 VAR14.VAR26 = FUN5(VAR27);
 if (FUN6(VAR15, (struct VAR28*)&VAR14, sizeof(VAR14)) == VAR29)
 {
 break;
 }
 if (FUN7(VAR15, VAR30) == VAR29)
 {
 break;
 }
 VAR17 = FUN8(VAR15, NULL, NULL);
 if (VAR17 == VAR29)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR13 = recv(VAR17, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR13 == VAR29 || VAR13 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN9(VAR15);
 }
 if (VAR17 != VAR16)
 {
 FUN9(VAR17);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN10();
 }
#endif
 }
 FUN11(VAR2);
}
#endif
