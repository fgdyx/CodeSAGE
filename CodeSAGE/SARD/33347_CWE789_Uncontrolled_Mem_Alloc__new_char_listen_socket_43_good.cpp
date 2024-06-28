#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 VAR3 = 20;
}
static void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 FUN1(VAR3);
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5))
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN4(VAR2 &VAR3)
{
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
 if (FUN5(FUN6(2,2), &VAR7) != VAR16)
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
 VAR10.VAR24 = FUN7(VAR25);
 if (FUN8(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN9(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN10(VAR11, NULL, NULL);
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
 VAR3 = FUN11(VAR14, NULL, 0);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN12(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN12(VAR13);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN13();
 }
#endif
 }
}
static void FUN14()
{
 size_t VAR3;
 VAR3 = 0;
 FUN4(VAR3);
 {
 char * VAR4;
 if (VAR3 > strlen(VAR5) && VAR3 < 100)
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN3(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN15()
{
 FUN2();
 FUN14();
}
#endif
