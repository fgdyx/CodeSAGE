#ifndef VAR1
static int VAR2 = 0;
static void FUN1(int VAR3)
{
 if(VAR2)
 {
 if(VAR3 > 0)
 {
 /* POTENTIAL FLAW: if (data*2) > INT_MAX, this will overflow */
 int VAR4 = VAR3 * 2;
 FUN2(VAR4);
 }
 }
}
void FUN3()
{
 int VAR3;
 VAR3 = 0;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 SOCKET VAR12 = VAR11;
 char VAR13[VAR14];
 do
 {
#ifdef VAR5
 if (FUN4(FUN5(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR10 = socket(VAR16, VAR17, VAR18);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN6(VAR24);
 if (FUN7(VAR10, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN8(VAR10, VAR27) == VAR26)
 {
 break;
 }
 VAR12 = FUN9(VAR10, NULL, NULL);
 if (VAR12 == VAR26)
 {
 break;
 }
 VAR8 = recv(VAR12, VAR13, VAR14 - 1, 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR13[VAR8] = '';
 VAR3 = FUN10(VAR13);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN11(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN11(VAR12);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN12();
 }
#endif
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
