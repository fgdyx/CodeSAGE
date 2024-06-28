#ifndef VAR1
static void FUN1(float VAR2)
{
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
}
static void FUN3()
{
 float VAR2;
 void (*VAR4) (float) = VAR5;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 FUN4(VAR2);
}
static void FUN5(float VAR2)
{
 if(FUN6(VAR2) > 0.000001)
 {
 int VAR3 = (int)(100.0 / VAR2);
 FUN2(VAR3);
 }
 else
 {
 FUN7("");
 }
}
static void FUN8()
{
 float VAR2;
 void (*VAR4) (float) = VAR6;
 VAR2 = 0.0F;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 char VAR14[VAR15];
 do
 {
#ifdef VAR7
 if (FUN9(FUN10(2,2), &VAR8) != VAR16)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR17, VAR18, VAR19);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR20 = VAR17;
 VAR11.VAR21.VAR22 = FUN11(VAR23);
 VAR11.VAR24 = FUN12(VAR25);
 if (connect(VAR12, (struct VAR26*)&VAR11, sizeof(VAR11)) == VAR27)
 {
 break;
 }
 VAR10 = recv(VAR12, VAR14, VAR15 - 1, 0);
 if (VAR10 == VAR27 || VAR10 == 0)
 {
 break;
 }
 VAR14[VAR10] = '';
 VAR2 = (float)FUN13(VAR14);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN14(VAR12);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN15();
 }
#endif
 }
 FUN4(VAR2);
}
void FUN16()
{
 FUN3();
 FUN8();
}
#endif
