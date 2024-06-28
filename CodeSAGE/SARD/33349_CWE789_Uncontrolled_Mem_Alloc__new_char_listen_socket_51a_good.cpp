#ifndef VAR1
void FUN1(size_t VAR2);
void FUN2(size_t VAR2);
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 FUN1(VAR2);
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 SOCKET VAR8 = VAR9;
 SOCKET VAR10 = VAR9;
 char VAR11[VAR12];
 do
 {
#ifdef VAR3
 if (FUN5(FUN6(2,2), &VAR4) != VAR13)
 {
 break;
 }
 VAR5 = 1;
#endif
 VAR8 = socket(VAR14, VAR15, VAR16);
 if (VAR8 == VAR9)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR17 = VAR14;
 VAR7.VAR18.VAR19 = VAR20;
 VAR7.VAR21 = FUN7(VAR22);
 if (FUN8(VAR8, (struct VAR23*)&VAR7, sizeof(VAR7)) == VAR24)
 {
 break;
 }
 if (FUN9(VAR8, VAR25) == VAR24)
 {
 break;
 }
 VAR10 = FUN10(VAR8, NULL, NULL);
 if (VAR10 == VAR24)
 {
 break;
 }
 VAR6 = recv(VAR10, VAR11, VAR12 - 1, 0);
 if (VAR6 == VAR24 || VAR6 == 0)
 {
 break;
 }
 VAR11[VAR6] = '';
 VAR2 = FUN11(VAR11, NULL, 0);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN12(VAR8);
 }
 if (VAR10 != VAR9)
 {
 FUN12(VAR10);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN13();
 }
#endif
 }
 FUN2(VAR2);
}
void FUN14()
{
 FUN3();
 FUN4();
}
#endif
