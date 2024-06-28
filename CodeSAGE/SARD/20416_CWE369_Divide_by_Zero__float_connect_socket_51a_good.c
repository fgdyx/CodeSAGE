#ifndef VAR1
void FUN1(float VAR2);
static void FUN2()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 FUN1(VAR2);
}
void FUN3(float VAR2);
static void FUN4()
{
 float VAR2;
 VAR2 = 0.0F;
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
 if (FUN5(FUN6(2,2), &VAR4) != VAR12)
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
 VAR7.VAR17.VAR18 = FUN7(VAR19);
 VAR7.VAR20 = FUN8(VAR21);
 if (connect(VAR8, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR8, VAR10, VAR11 - 1, 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR10[VAR6] = '';
 VAR2 = (float)FUN9(VAR10);
 }
 while (0);
 if (VAR8 != VAR9)
 {
 FUN10(VAR8);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN11();
 }
#endif
 }
 FUN3(VAR2);
}
void FUN12()
{
 FUN2();
 FUN4();
}
#endif
