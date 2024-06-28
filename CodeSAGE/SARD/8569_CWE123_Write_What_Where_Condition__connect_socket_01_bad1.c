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
 do
 {
#ifdef VAR7
 if (FUN2(FUN3(2,2), &VAR8) != VAR14)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR15, VAR16, VAR17);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR18 = VAR15;
 VAR11.VAR19.VAR20 = FUN4(VAR21);
 VAR11.VAR22 = FUN5(VAR23);
 if (connect(VAR12, (struct VAR24*)&VAR11, sizeof(VAR11)) == VAR25)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR10 = recv(VAR12, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR10 == VAR25 || VAR10 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN6(VAR12);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN7();
 }
#endif
 }
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR26 = VAR2.VAR4.VAR6;
 VAR27 = VAR2.VAR4.VAR5;
 VAR26->VAR5 = VAR27;
 VAR27->VAR6 = VAR26;
}
#endif
