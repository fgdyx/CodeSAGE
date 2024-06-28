#ifndef VAR1
void FUN1()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 if(VAR7)
 {
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
 if (FUN2(FUN3(2,2), &VAR9) != VAR16)
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
 VAR12.VAR24 = FUN4(VAR25);
 if (FUN5(VAR13, (struct VAR26*)&VAR12, sizeof(VAR12)) == VAR27)
 {
 break;
 }
 if (FUN6(VAR13, VAR28) == VAR27)
 {
 break;
 }
 VAR15 = FUN7(VAR13, NULL, NULL);
 if (VAR15 == VAR27)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR11 = recv(VAR15, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR11 == VAR27 || VAR11 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN8(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN8(VAR15);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN9();
 }
#endif
 }
 }
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR29 = VAR2.VAR4.VAR6;
 VAR30 = VAR2.VAR4.VAR5;
 VAR29->VAR5 = VAR30;
 VAR30->VAR6 = VAR29;
}
#endif
