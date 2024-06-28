#ifndef VAR1
void FUN1(VAR2<short> VAR3);
void FUN2()
{
 short VAR4;
 VAR2<short> VAR3;
 VAR4 = 0;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 int VAR9;
 struct sockaddr_in VAR10;
 SOCKET VAR11 = VAR12;
 SOCKET VAR13 = VAR12;
 char VAR14[VAR15];
 do
 {
#ifdef VAR5
 if (FUN3(FUN4(2,2), &VAR6) != VAR16)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR11 = socket(VAR17, VAR18, VAR19);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN5(VAR25);
 if (FUN6(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN7(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN8(VAR11, NULL, NULL);
 if (VAR13 == VAR27)
 {
 break;
 }
 VAR8 = recv(VAR13, VAR14, VAR15 - 1, 0);
 /* FLAW: Use a value input from the network */
 if (VAR8 == VAR27 || VAR8 == 0)
 {
 break;
 }
 VAR14[VAR8] = '';
 VAR9 = FUN9(VAR14);
 if (VAR9 > VAR29 || VAR9 < VAR30)
 {
 VAR4 = -1;
 }
 else
 {
 VAR4 = VAR9;
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN10(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN10(VAR13);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN11();
 }
#endif
 }
 VAR3.FUN12(VAR3.FUN13(), 1, VAR4);
 VAR3.FUN12(VAR3.FUN13(), 1, VAR4);
 VAR3.FUN12(VAR3.FUN13(), 1, VAR4);
 FUN1(VAR3);
}
#endif
