#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3[10] = { 0 };
 /* POTENTIAL FLAW: Attempt to access a negative index of the array
 * This check does not check to see if the array index is negative */
 if (VAR2 < 10)
 {
 FUN2(VAR3[VAR2]);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4()
{
 int VAR2;
 void (*VAR4) (int) = VAR5;
 VAR2 = -1;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 SOCKET VAR11 = VAR12;
 SOCKET VAR13 = VAR12;
 char VAR14[VAR15];
 do
 {
#ifdef VAR6
 if (FUN5(FUN6(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR11 = socket(VAR17, VAR18, VAR19);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN7(VAR25);
 if (FUN8(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN9(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN10(VAR11, NULL, NULL);
 if (VAR13 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR13, VAR14, VAR15 - 1, 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR14[VAR9] = '';
 VAR2 = FUN11(VAR14);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN12(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN12(VAR13);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN13();
 }
#endif
 }
 FUN14(VAR2);
}
#endif
