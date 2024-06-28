#ifndef VAR1
void FUN1()
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
 SOCKET VAR11 = VAR10;
 char VAR12[VAR13];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR14)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR9 = socket(VAR15, VAR16, VAR17);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR18 = VAR15;
 VAR8.VAR19.VAR20 = VAR21;
 VAR8.VAR22 = FUN4(VAR23);
 if (FUN5(VAR9, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
 {
 break;
 }
 if (FUN6(VAR9, VAR26) == VAR25)
 {
 break;
 }
 VAR11 = FUN7(VAR9, NULL, NULL);
 if (VAR11 == VAR25)
 {
 break;
 }
 VAR6 = recv(VAR11, VAR12, VAR13 - 1, 0);
 /* FLAW: Use a value input from the network */
 if (VAR6 == VAR25 || VAR6 == 0)
 {
 break;
 }
 VAR12[VAR6] = '';
 VAR7 = FUN8(VAR12);
 if (VAR7 > VAR27 || VAR7 < VAR28)
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
 FUN9(VAR9);
 }
 if (VAR11 != VAR10)
 {
 FUN9(VAR11);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN10();
 }
#endif
 }
 VAR29* VAR30 = new VAR31;
 VAR30->FUN11(VAR2);
 delete VAR30;
}
#endif
