#ifndef VAR1
void FUN1()
{
 badStruct VAR2;
 VAR3 &VAR4 = VAR2;
 linkedList VAR5 = { &VAR5, &VAR5 };
 VAR2.VAR6.VAR7 = VAR5.VAR7;
 VAR2.VAR6.VAR8 = VAR5.VAR8;
 VAR5.VAR7 = &VAR2.VAR6;
 VAR5.VAR8 = &VAR2.VAR6;
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 SOCKET VAR14 = VAR15;
 do
 {
#ifdef VAR9
 if (FUN2(FUN3(2,2), &VAR10) != VAR16)
 {
 break;
 }
 VAR11 = 1;
#endif
 VAR14 = socket(VAR17, VAR18, VAR19);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR20 = VAR17;
 VAR13.VAR21.VAR22 = FUN4(VAR23);
 VAR13.VAR24 = FUN5(VAR25);
 if (connect(VAR14, (struct VAR26*)&VAR13, sizeof(VAR13)) == VAR27)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR12 = recv(VAR14, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR12 == VAR27 || VAR12 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN6(VAR14);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN7();
 }
#endif
 }
 {
 badStruct VAR2 = VAR4;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR28 = VAR2.VAR6.VAR8;
 VAR29 = VAR2.VAR6.VAR7;
 VAR28->VAR7 = VAR29;
 VAR29->VAR8 = VAR28;
 }
}
#endif
