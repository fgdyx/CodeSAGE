#ifndef VAR1
void FUN1();
void FUN2()
{
 short VAR2;
 VAR2 = 0;
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 char VAR11[VAR12];
 do
 {
#ifdef VAR3
 if (FUN3(FUN4(2,2), &VAR4) != VAR13)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR9 = socket(VAR14, VAR15, VAR16);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN5(VAR20);
 VAR8.VAR21 = FUN6(VAR22);
 if (connect(VAR9, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 /* FLAW: Use a value input from the network */
 VAR6 = recv(VAR9, VAR11, VAR12 - 1, 0);
 if (VAR6 == VAR24 || VAR6 == 0)
 {
 break;
 }
 VAR11[VAR6] = '';
 VAR7 = FUN7(VAR11);
 if (VAR7 > VAR25 || VAR7 < VAR26)
 {
 VAR2 = -1;
 }
 else
 {
 VAR2 = VAR7;
 }
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN8(VAR9);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN9();
 }
#endif
 }
 VAR27 = VAR2;
 FUN1();
}
#endif
