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
 strncpy(VAR4, VAR3, VAR2);
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
 char VAR15[VAR16];
 do
 {
#ifdef VAR7
 if (FUN4(FUN5(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR13 = socket(VAR18, VAR19, VAR20);
 if (VAR13 == VAR14)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN6(VAR24);
 VAR12.VAR25 = FUN7(VAR26);
 if (connect(VAR13, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 /* FLAW: Use a value input from the network */
 VAR10 = recv(VAR13, VAR15, VAR16 - 1, 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR15[VAR10] = '';
 VAR11 = FUN8(VAR15);
 if (VAR11 > VAR29 || VAR11 < VAR30)
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
 FUN9(VAR13);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN10();
 }
#endif
 }
 FUN11(VAR2);
}
#endif
