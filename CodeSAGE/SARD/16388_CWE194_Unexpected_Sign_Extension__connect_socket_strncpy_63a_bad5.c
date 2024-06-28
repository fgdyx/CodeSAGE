#ifndef VAR1
void FUN1(short * VAR2);
void FUN2()
{
 short VAR3;
 VAR3 = 0;
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 char VAR12[VAR13];
 do
 {
#ifdef VAR4
 if (FUN3(FUN4(2,2), &VAR5) != VAR14)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR10 = socket(VAR15, VAR16, VAR17);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN5(VAR21);
 VAR9.VAR22 = FUN6(VAR23);
 if (connect(VAR10, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 /* FLAW: Use a value input from the network */
 VAR7 = recv(VAR10, VAR12, VAR13 - 1, 0);
 if (VAR7 == VAR25 || VAR7 == 0)
 {
 break;
 }
 VAR12[VAR7] = '';
 VAR8 = FUN7(VAR12);
 if (VAR8 > VAR26 || VAR8 < VAR27)
 {
 VAR3 = -1;
 }
 else
 {
 VAR3 = VAR8;
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN8(VAR10);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN9();
 }
#endif
 }
 FUN1(&VAR3);
}
#endif
