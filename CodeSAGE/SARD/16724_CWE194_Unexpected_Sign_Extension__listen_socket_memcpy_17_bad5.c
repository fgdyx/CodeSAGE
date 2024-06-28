#ifndef VAR1
void FUN1()
{
 int VAR2;
 short VAR3;
 VAR3 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 SOCKET VAR12 = VAR11;
 char VAR13[VAR14];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR15)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR10 = socket(VAR16, VAR17, VAR18);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN4(VAR24);
 if (FUN5(VAR10, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN6(VAR10, VAR27) == VAR26)
 {
 break;
 }
 VAR12 = FUN7(VAR10, NULL, NULL);
 if (VAR12 == VAR26)
 {
 break;
 }
 VAR7 = recv(VAR12, VAR13, VAR14 - 1, 0);
 /* FLAW: Use a value input from the network */
 if (VAR7 == VAR26 || VAR7 == 0)
 {
 break;
 }
 VAR13[VAR7] = '';
 VAR8 = FUN8(VAR13);
 if (VAR8 > VAR28 || VAR8 < VAR29)
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
 FUN9(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN9(VAR12);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN10();
 }
#endif
 }
 }
 {
 char VAR30[100];
 char VAR31[100] = "";
 memset(VAR30, '', 100-1);
 VAR30[100-1] = '';
 if (VAR3 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR31, VAR30, VAR3);
 VAR31[VAR3] = '';
 }
 FUN11(VAR31);
 }
}
#endif
