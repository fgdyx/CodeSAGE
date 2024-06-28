#ifndef VAR1
static short FUN1(short VAR2)
{
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
 if (FUN2(FUN3(2,2), &VAR4) != VAR13)
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
 VAR8.VAR18.VAR19 = FUN4(VAR20);
 VAR8.VAR21 = FUN5(VAR22);
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
 VAR7 = FUN6(VAR11);
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
 FUN7(VAR9);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN8();
 }
#endif
 }
 return VAR2;
}
void FUN9()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 {
 char VAR27[100];
 char VAR28[100] = "";
 memset(VAR27, '', 100-1);
 VAR27[100-1] = '';
 if (VAR2 < 100)
 {
 /* POTENTIAL FLAW: data is interpreted as an unsigned int - if its value is negative,
 * the sign extension could result in a very large number */
 memcpy(VAR28, VAR27, VAR2);
 VAR28[VAR2] = '';
 }
 FUN10(VAR28);
 }
}
#endif
