#ifndef VAR1
static void FUN1(short VAR2)
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
 memcpy(VAR4, VAR3, VAR2);
 VAR4[VAR2] = '';
 }
 FUN2(VAR4);
 }
}
void FUN3()
{
 short VAR2;
 void (*VAR5) (short) = VAR6;
 VAR2 = 0;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 int VAR11;
 struct sockaddr_in VAR12;
 SOCKET VAR13 = VAR14;
 SOCKET VAR15 = VAR14;
 char VAR16[VAR17];
 do
 {
#ifdef VAR7
 if (FUN4(FUN5(2,2), &VAR8) != VAR18)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR19, VAR20, VAR21);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN6(VAR27);
 if (FUN7(VAR13, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN8(VAR13, VAR30) == VAR29)
 {
 break;
 }
 VAR15 = FUN9(VAR13, NULL, NULL);
 if (VAR15 == VAR29)
 {
 break;
 }
 VAR10 = recv(VAR15, VAR16, VAR17 - 1, 0);
 /* FLAW: Use a value input from the network */
 if (VAR10 == VAR29 || VAR10 == 0)
 {
 break;
 }
 VAR16[VAR10] = '';
 VAR11 = FUN10(VAR16);
 if (VAR11 > VAR31 || VAR11 < VAR32)
 {
 VAR2 = -1;
 }
 else
 {
 VAR2 = VAR11;
 }
 }
 while (0);
 if (VAR13 != VAR14)
 {
 FUN11(VAR13);
 }
 if (VAR15 != VAR14)
 {
 FUN11(VAR15);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN12();
 }
#endif
 }
 FUN13(VAR2);
}
#endif
