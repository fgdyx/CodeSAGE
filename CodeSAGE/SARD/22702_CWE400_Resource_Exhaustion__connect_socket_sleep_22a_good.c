#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(int VAR5);
static void FUN2()
{
 int VAR5;
 VAR5 = -1;
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
 if (FUN3(FUN4(2,2), &VAR7) != VAR15)
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
 VAR10.VAR20.VAR21 = FUN5(VAR22);
 VAR10.VAR23 = FUN6(VAR24);
 if (connect(VAR11, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
 {
 break;
 }
 VAR9 = recv(VAR11, VAR13, VAR14 - 1, 0);
 if (VAR9 == VAR26 || VAR9 == 0)
 {
 break;
 }
 VAR13[VAR9] = '';
 VAR5 = FUN7(VAR13);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN8(VAR11);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN9();
 }
#endif
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN10(int VAR5);
static void FUN11()
{
 int VAR5;
 VAR5 = -1;
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
 if (FUN3(FUN4(2,2), &VAR7) != VAR15)
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
 VAR10.VAR20.VAR21 = FUN5(VAR22);
 VAR10.VAR23 = FUN6(VAR24);
 if (connect(VAR11, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
 {
 break;
 }
 VAR9 = recv(VAR11, VAR13, VAR14 - 1, 0);
 if (VAR9 == VAR26 || VAR9 == 0)
 {
 break;
 }
 VAR13[VAR9] = '';
 VAR5 = FUN7(VAR13);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN8(VAR11);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN9();
 }
#endif
 }
 VAR3 = 1;
 FUN10(VAR5);
}
void FUN12(int VAR5);
static void FUN13()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 20;
 VAR4 = 1;
 FUN12(VAR5);
}
void FUN14()
{
 FUN2();
 FUN11();
 FUN13();
}
#endif
