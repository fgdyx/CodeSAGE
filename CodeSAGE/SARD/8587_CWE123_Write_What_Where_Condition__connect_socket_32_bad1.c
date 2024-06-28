#ifndef VAR1
void FUN1()
{
 badStruct VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 linkedList VAR6 = { &VAR6, &VAR6 };
 VAR2.VAR7.VAR8 = VAR6.VAR8;
 VAR2.VAR7.VAR9 = VAR6.VAR9;
 VAR6.VAR8 = &VAR2.VAR7;
 VAR6.VAR9 = &VAR2.VAR7;
 {
 badStruct VAR2 = *VAR4;
 {
#ifdef VAR10
 WSADATA VAR11;
 int VAR12 = 0;
#endif
 int VAR13;
 struct sockaddr_in VAR14;
 SOCKET VAR15 = VAR16;
 do
 {
#ifdef VAR10
 if (FUN2(FUN3(2,2), &VAR11) != VAR17)
 {
 break;
 }
 VAR12 = 1;
#endif
 VAR15 = socket(VAR18, VAR19, VAR20);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR14, 0, sizeof(VAR14));
 VAR14.VAR21 = VAR18;
 VAR14.VAR22.VAR23 = FUN4(VAR24);
 VAR14.VAR25 = FUN5(VAR26);
 if (connect(VAR15, (struct VAR27*)&VAR14, sizeof(VAR14)) == VAR28)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR13 = recv(VAR15, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR13 == VAR28 || VAR13 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN6(VAR15);
 }
#ifdef VAR10
 if (VAR12)
 {
 FUN7();
 }
#endif
 }
 *VAR4 = VAR2;
 }
 {
 badStruct VAR2 = *VAR5;
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR29 = VAR2.VAR7.VAR9;
 VAR30 = VAR2.VAR7.VAR8;
 VAR29->VAR8 = VAR30;
 VAR30->VAR9 = VAR29;
 }
}
#endif
