#ifndef VAR1
static void FUN1()
{
 short VAR2 = VAR3;
 {
 char VAR4[100];
 char VAR5[100] = "";
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR5, VAR4, VAR2);
 VAR5[VAR2] = '';
 }
 FUN2(VAR5);
 }
}
void FUN3()
{
 short VAR2;
 VAR2 = 0;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 char VAR14[VAR15];
 do
 {
#ifdef VAR6
 if (FUN4(FUN5(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR12 = socket(VAR17, VAR18, VAR19);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN6(VAR23);
 VAR11.VAR24 = FUN7(VAR25);
 if (connect(VAR12, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 /* FLAW: Use a value input from the network */
 VAR9 = recv(VAR12, VAR14, VAR15 - 1, 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR14[VAR9] = '';
 VAR10 = FUN8(VAR14);
 if (VAR10 > VAR28 || VAR10 < VAR29)
 {
 VAR2 = -1;
 }
 else
 {
 VAR2 = VAR10;
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN9(VAR12);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN10();
 }
#endif
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
