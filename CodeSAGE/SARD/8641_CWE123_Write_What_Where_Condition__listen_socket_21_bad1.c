#ifndef VAR1
static int VAR2 = 0;
static VAR3 FUN1(badStruct VAR4)
{
 if(VAR2)
 {
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 SOCKET VAR12 = VAR11;
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR13)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR10 = socket(VAR14, VAR15, VAR16);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR17 = VAR14;
 VAR9.VAR18.VAR19 = VAR20;
 VAR9.VAR21 = FUN4(VAR22);
 if (FUN5(VAR10, (struct VAR23*)&VAR9, sizeof(VAR9)) == VAR24)
 {
 break;
 }
 if (FUN6(VAR10, VAR25) == VAR24)
 {
 break;
 }
 VAR12 = FUN7(VAR10, NULL, NULL);
 if (VAR12 == VAR24)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR8 = recv(VAR12, (char*)&VAR4, sizeof(VAR4), 0);
 if (VAR8 == VAR24 || VAR8 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN8(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN8(VAR12);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN9();
 }
#endif
 }
 }
 return VAR4;
}
void FUN10()
{
 badStruct VAR4;
 linkedList VAR26 = { &VAR26, &VAR26 };
 VAR4.VAR27.VAR28 = VAR26.VAR28;
 VAR4.VAR27.VAR29 = VAR26.VAR29;
 VAR26.VAR28 = &VAR4.VAR27;
 VAR26.VAR29 = &VAR4.VAR27;
 VAR2 = 1;
 VAR4 = FUN1(VAR4);
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR30 = VAR4.VAR27.VAR29;
 VAR31 = VAR4.VAR27.VAR28;
 VAR30->VAR28 = VAR31;
 VAR31->VAR29 = VAR30;
}
#endif
