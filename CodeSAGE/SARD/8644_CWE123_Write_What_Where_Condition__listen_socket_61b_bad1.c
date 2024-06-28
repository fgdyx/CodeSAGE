#ifndef VAR1
VAR2 FUN1(badStruct VAR3)
{
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 SOCKET VAR11 = VAR10;
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR12)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR9 = socket(VAR13, VAR14, VAR15);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR16 = VAR13;
 VAR8.VAR17.VAR18 = VAR19;
 VAR8.VAR20 = FUN4(VAR21);
 if (FUN5(VAR9, (struct VAR22*)&VAR8, sizeof(VAR8)) == VAR23)
 {
 break;
 }
 if (FUN6(VAR9, VAR24) == VAR23)
 {
 break;
 }
 VAR11 = FUN7(VAR9, NULL, NULL);
 if (VAR11 == VAR23)
 {
 break;
 }
 /* FLAW: overwrite linked list pointers with data */
 VAR7 = recv(VAR11, (char*)&VAR3, sizeof(VAR3), 0);
 if (VAR7 == VAR23 || VAR7 == 0)
 {
 break;
 }
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN8(VAR9);
 }
 if (VAR11 != VAR10)
 {
 FUN8(VAR11);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN9();
 }
#endif
 }
 return VAR3;
}
#endif
