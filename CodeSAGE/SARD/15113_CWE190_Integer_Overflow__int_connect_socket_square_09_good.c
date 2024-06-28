#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 char VAR11[VAR12];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR9 = socket(VAR14, VAR15, VAR16);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN4(VAR20);
 VAR8.VAR21 = FUN5(VAR22);
 if (connect(VAR9, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR9, VAR11, VAR12 - 1, 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR11[VAR7] = '';
 VAR2 = FUN6(VAR11);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN7(VAR9);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN8();
 }
#endif
 }
 }
 if(VAR25)
 {
 FUN9("");
 }
 else
 {
 if (FUN10((long)VAR2) <= (long)FUN11((double)VAR26))
 {
 int VAR27 = VAR2 * VAR2;
 FUN12(VAR27);
 }
 else
 {
 FUN9("");
 }
 }
}
static void FUN13()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 SOCKET VAR9 = VAR10;
 char VAR11[VAR12];
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR9 = socket(VAR14, VAR15, VAR16);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN4(VAR20);
 VAR8.VAR21 = FUN5(VAR22);
 if (connect(VAR9, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR9, VAR11, VAR12 - 1, 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR11[VAR7] = '';
 VAR2 = FUN6(VAR11);
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN7(VAR9);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN8();
 }
#endif
 }
 }
 if(VAR3)
 {
 if (FUN10((long)VAR2) <= (long)FUN11((double)VAR26))
 {
 int VAR27 = VAR2 * VAR2;
 FUN12(VAR27);
 }
 else
 {
 FUN9("");
 }
 }
}
static void FUN14()
{
 int VAR2;
 VAR2 = 0;
 if(VAR25)
 {
 FUN9("");
 }
 else
 {
 VAR2 = 2;
 }
 if(VAR3)
 {
 {
 int VAR27 = VAR2 * VAR2;
 FUN12(VAR27);
 }
 }
}
static void FUN15()
{
 int VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = 2;
 }
 if(VAR3)
 {
 {
 int VAR27 = VAR2 * VAR2;
 FUN12(VAR27);
 }
 }
}
void FUN16()
{
 FUN1();
 FUN13();
 FUN14();
 FUN15();
}
#endif
