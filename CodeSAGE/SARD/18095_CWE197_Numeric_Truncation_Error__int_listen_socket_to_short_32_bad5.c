#ifndef VAR1
void FUN1()
{
 int VAR2;
 int *VAR3 = &VAR2;
 int *VAR4 = &VAR2;
 VAR2 = -1;
 {
 int VAR2 = *VAR3;
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
 if (FUN2(FUN3(2,2), &VAR6) != VAR15)
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
 VAR8 = recv(VAR12, VAR13, VAR14 - 1, 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR13[VAR8] = '';
 VAR2 = FUN8(VAR13);
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
#ifdef VAR5
 if (VAR7)
 {
 FUN10();
 }
#endif
 }
 *VAR3 = VAR2;
 }
 {
 int VAR2 = *VAR4;
 {
 /* POTENTIAL FLAW: Convert data to a short, possibly causing a truncation error */
 short VAR28 = (short)VAR2;
 FUN11(VAR28);
 }
 }
}
#endif
