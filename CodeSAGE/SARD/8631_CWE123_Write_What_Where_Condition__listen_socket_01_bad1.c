#ifndef VAR1
void FUN1()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 do
 {
#ifdef VAR7
 if (FUN2(FUN3(2,2), &VAR8) != VAR15)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR16, VAR17, VAR18);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR19 = VAR16;
 VAR11.VAR20.VAR21 = VAR22;
 VAR11.VAR23 = FUN4(VAR24);
 if (FUN5(VAR12, (struct VAR25*)&VAR11, sizeof(VAR11)) == VAR26)
 {
 break;
 }
 if (FUN6(VAR12, VAR27) == VAR26)
 {
 break;
 }
 VAR14 = FUN7(VAR12, NULL, NULL);
 if (VAR14 == VAR26)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR10 = recv(VAR14, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR10 == VAR26 || VAR10 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN8(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN8(VAR14);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN9();
 }
#endif
 }
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR28 = VAR2.VAR4.VAR6;
 VAR29 = VAR2.VAR4.VAR5;
 VAR28->VAR5 = VAR29;
 VAR29->VAR6 = VAR28;
}
#endif
