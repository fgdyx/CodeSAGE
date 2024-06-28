#ifndef VAR1
static short FUN1(short VAR2)
{
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 char VAR10[VAR11];
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR13, VAR14, VAR15);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 /* FLAW: Use a number input from the network */
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = (short)FUN6(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN7(VAR8);
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
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR24 = (char)VAR2;
 FUN10(VAR24);
 }
}
#endif
