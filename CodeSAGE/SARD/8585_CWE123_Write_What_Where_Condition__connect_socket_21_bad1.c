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
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR12)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR10 = socket(VAR13, VAR14, VAR15);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR16 = VAR13;
 VAR9.VAR17.VAR18 = FUN4(VAR19);
 VAR9.VAR20 = FUN5(VAR21);
 if (connect(VAR10, (struct VAR22*)&VAR9, sizeof(VAR9)) == VAR23)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR8 = recv(VAR10, (char*)&VAR4, sizeof(VAR4), 0);
 if (VAR8 == VAR23 || VAR8 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN6(VAR10);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN7();
 }
#endif
 }
 }
 return VAR4;
}
void FUN8()
{
 badStruct VAR4;
 linkedList VAR24 = { &VAR24, &VAR24 };
 VAR4.VAR25.VAR26 = VAR24.VAR26;
 VAR4.VAR25.VAR27 = VAR24.VAR27;
 VAR24.VAR26 = &VAR4.VAR25;
 VAR24.VAR27 = &VAR4.VAR25;
 VAR2 = 1;
 VAR4 = FUN1(VAR4);
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR28 = VAR4.VAR25.VAR27;
 VAR29 = VAR4.VAR25.VAR26;
 VAR28->VAR26 = VAR29;
 VAR29->VAR27 = VAR28;
}
#endif
