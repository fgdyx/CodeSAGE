#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(float VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if(FUN3(VAR5) > 0.000001)
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 float VAR5;
 VAR5 = 0.0F;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 char VAR15[VAR16];
 do
 {
#ifdef VAR7
 if (FUN6(FUN7(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR18, VAR19, VAR20);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN8(VAR26);
 if (FUN9(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN10(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN11(VAR12, NULL, NULL);
 if (VAR14 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR14, VAR15, VAR16 - 1, 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR15[VAR10] = '';
 VAR5 = (float)FUN12(VAR15);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN13(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN13(VAR14);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN14();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN15(float VAR5)
{
 if(VAR3)
 {
 if(FUN3(VAR5) > 0.000001)
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN16()
{
 float VAR5;
 VAR5 = 0.0F;
 {
#ifdef VAR7
 WSADATA VAR8;
 int VAR9 = 0;
#endif
 int VAR10;
 struct sockaddr_in VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 char VAR15[VAR16];
 do
 {
#ifdef VAR7
 if (FUN6(FUN7(2,2), &VAR8) != VAR17)
 {
 break;
 }
 VAR9 = 1;
#endif
 VAR12 = socket(VAR18, VAR19, VAR20);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR11, 0, sizeof(VAR11));
 VAR11.VAR21 = VAR18;
 VAR11.VAR22.VAR23 = VAR24;
 VAR11.VAR25 = FUN8(VAR26);
 if (FUN9(VAR12, (struct VAR27*)&VAR11, sizeof(VAR11)) == VAR28)
 {
 break;
 }
 if (FUN10(VAR12, VAR29) == VAR28)
 {
 break;
 }
 VAR14 = FUN11(VAR12, NULL, NULL);
 if (VAR14 == VAR28)
 {
 break;
 }
 VAR10 = recv(VAR14, VAR15, VAR16 - 1, 0);
 if (VAR10 == VAR28 || VAR10 == 0)
 {
 break;
 }
 VAR15[VAR10] = '';
 VAR5 = (float)FUN12(VAR15);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN13(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN13(VAR14);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN14();
 }
#endif
 }
 VAR3 = 1;
 FUN15(VAR5);
}
static void FUN17(float VAR5)
{
 if(VAR4)
 {
 {
 int VAR6 = (int)(100.0 / VAR5);
 FUN4(VAR6);
 }
 }
}
static void FUN18()
{
 float VAR5;
 VAR5 = 0.0F;
 VAR5 = 2.0F;
 VAR4 = 1;
 FUN17(VAR5);
}
void FUN19()
{
 FUN5();
 FUN16();
 FUN18();
}
#endif
