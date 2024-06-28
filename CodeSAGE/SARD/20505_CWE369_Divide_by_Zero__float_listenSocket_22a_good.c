#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(float VAR5);
static void FUN2()
{
 float VAR5;
 VAR5 = 0.0F;
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
 if (FUN3(FUN4(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR11 = socket(VAR17, VAR18, VAR19);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN5(VAR25);
 if (FUN6(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN7(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN8(VAR11, NULL, NULL);
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
 VAR5 = (float)FUN9(VAR14);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN10(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN10(VAR13);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN11();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN12(float VAR5);
static void FUN13()
{
 float VAR5;
 VAR5 = 0.0F;
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
 if (FUN3(FUN4(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR11 = socket(VAR17, VAR18, VAR19);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN5(VAR25);
 if (FUN6(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN7(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN8(VAR11, NULL, NULL);
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
 VAR5 = (float)FUN9(VAR14);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN10(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN10(VAR13);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN11();
 }
#endif
 }
 VAR3 = 1;
 FUN12(VAR5);
}
void FUN14(float VAR5);
static void FUN15()
{
 float VAR5;
 VAR5 = 0.0F;
 VAR5 = 2.0F;
 VAR4 = 1;
 FUN14(VAR5);
}
void FUN16()
{
 FUN2();
 FUN13();
 FUN15();
}
#endif
