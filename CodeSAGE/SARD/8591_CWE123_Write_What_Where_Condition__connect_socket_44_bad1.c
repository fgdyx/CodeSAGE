#ifndef VAR1
static void FUN1(badStruct VAR2)
{
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR3 = VAR2.VAR4.VAR5;
 VAR6 = VAR2.VAR4.VAR7;
 VAR3->VAR7 = VAR6;
 VAR6->VAR5 = VAR3;
}
void FUN2()
{
 badStruct VAR2;
 void (*VAR8) (VAR9) = VAR10;
 linkedList VAR11 = { &VAR11, &VAR11 };
 VAR2.VAR4.VAR7 = VAR11.VAR7;
 VAR2.VAR4.VAR5 = VAR11.VAR5;
 */
 VAR11.VAR7 = &VAR2.VAR4;
 VAR11.VAR5 = &VAR2.VAR4;
 {
#ifdef VAR12
 WSADATA VAR13;
 int VAR14 = 0;
#endif
 int VAR15;
 struct sockaddr_in VAR16;
 SOCKET VAR17 = VAR18;
 do
 {
#ifdef VAR12
 if (FUN3(FUN4(2,2), &VAR13) != VAR19)
 {
 break;
 }
 VAR14 = 1;
#endif
 VAR17 = socket(VAR20, VAR21, VAR22);
 if (VAR17 == VAR18)
 {
 break;
 }
 memset(&VAR16, 0, sizeof(VAR16));
 VAR16.VAR23 = VAR20;
 VAR16.VAR24.VAR25 = FUN5(VAR26);
 VAR16.VAR27 = FUN6(VAR28);
 if (connect(VAR17, (struct VAR29*)&VAR16, sizeof(VAR16)) == VAR30)
 {
 break;
 }
 VAR15 = recv(VAR17, (char*)&VAR2, sizeof(VAR2), 0);
 if (VAR15 == VAR30 || VAR15 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR17 != VAR18)
 {
 FUN7(VAR17);
 }
#ifdef VAR12
 /* FLAW: overwrite linked list pointers with data */
 if (VAR14)
 {
 FUN8();
 }
#endif
 }
 FUN9(VAR2);
}
#endif
