#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 FUN1(VAR2);
}
static void FUN4(int VAR2)
{
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR4))
 {
 int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
 else
 {
 FUN7("");
 }
}
static void FUN8()
{
 int VAR2;
 VAR2 = 0;
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
 if (FUN9(FUN10(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR10 = socket(VAR16, VAR17, VAR18);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN11(VAR24);
 if (FUN12(VAR10, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN13(VAR10, VAR27) == VAR26)
 {
 break;
 }
 VAR12 = FUN14(VAR10, NULL, NULL);
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
 VAR2 = FUN15(VAR13);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN16(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN16(VAR12);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN17();
 }
#endif
 }
 FUN4(VAR2);
}
void FUN18()
{
 FUN8();
 FUN3();
}
#endif
