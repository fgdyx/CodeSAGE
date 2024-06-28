#ifndef VAR1
static void FUN1(short VAR2)
{
 {
 /* POTENTIAL FLAW: Convert data to a char, possibly causing a truncation error */
 char VAR3 = (char)VAR2;
 FUN2(VAR3);
 }
}
void FUN3()
{
 short VAR2;
 void (*VAR4) (short) = VAR5;
 VAR2 = -1;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 SOCKET VAR11 = VAR12;
 char VAR13[VAR14];
 do
 {
#ifdef VAR6
 if (FUN4(FUN5(2,2), &VAR7) != VAR15)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR11 = socket(VAR16, VAR17, VAR18);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR19 = VAR16;
 VAR10.VAR20.VAR21 = FUN6(VAR22);
 VAR10.VAR23 = FUN7(VAR24);
 if (connect(VAR11, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
 {
 break;
 }
 /* FLAW: Use a number input from the network */
 VAR9 = recv(VAR11, VAR13, VAR14 - 1, 0);
 if (VAR9 == VAR26 || VAR9 == 0)
 {
 break;
 }
 VAR13[VAR9] = '';
 VAR2 = (short)FUN8(VAR13);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN9(VAR11);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN10();
 }
#endif
 }
 FUN11(VAR2);
}
#endif
