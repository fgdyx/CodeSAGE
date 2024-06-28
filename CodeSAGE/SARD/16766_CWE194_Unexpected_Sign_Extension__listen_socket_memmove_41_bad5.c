#ifndef VAR1
void FUN1(short VAR2)
{
 {
 char VAR3[100];
 char VAR4[100] = "";
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memmove(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN2(VAR4);
 }
}
void FUN3()
{
 short VAR2;
 VAR2 = 0;
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
 if (FUN4(FUN5(2,2), &VAR6) != VAR16)
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
 VAR10.VAR24 = FUN6(VAR25);
 if (FUN7(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN8(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN9(VAR11, NULL, NULL);
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
 VAR9 = FUN10(VAR14);
 if (VAR9 > VAR29 || VAR9 < VAR30)
 {
 VAR2 = -1;
 }
 else
 {
 VAR2 = VAR9;
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN11(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN11(VAR13);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN12();
 }
#endif
 }
 FUN1(VAR2);
}
#endif
