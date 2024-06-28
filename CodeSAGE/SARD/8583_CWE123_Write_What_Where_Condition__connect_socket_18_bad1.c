#ifndef VAR1
void FUN1()
{
 badStruct VAR2;
 linkedList VAR3 = { &VAR3, &VAR3 };
 VAR2.VAR4.VAR5 = VAR3.VAR5;
 VAR2.VAR4.VAR6 = VAR3.VAR6;
 VAR3.VAR5 = &VAR2.VAR4;
 VAR3.VAR6 = &VAR2.VAR4;
 goto VAR7;
VAR7:
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 do
 {
#ifdef VAR8
 if (FUN2(FUN3(2,2), &VAR9) != VAR15)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR13 = socket(VAR16, VAR17, VAR18);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR19 = VAR16;
 VAR12.VAR20.VAR21 = FUN4(VAR22);
 VAR12.VAR23 = FUN5(VAR24);
 if (connect(VAR13, (struct VAR25*)&VAR12, sizeof(VAR12)) == VAR26)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR11 = recv(VAR13, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR11 == VAR26 || VAR11 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN6(VAR13);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN7();
 }
#endif
 }
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR27 = VAR2.VAR4.VAR6;
 VAR28 = VAR2.VAR4.VAR5;
 VAR27->VAR5 = VAR28;
 VAR28->VAR6 = VAR27;
}
#endif
