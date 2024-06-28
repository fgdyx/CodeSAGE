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
 char VAR13[VAR14];
 do
 {
#ifdef VAR6
 if (FUN5(FUN6(2,2), &VAR7) != VAR15)
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
 VAR10.VAR20.VAR21 = FUN7(VAR22);
 VAR10.VAR23 = FUN8(VAR24);
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
 VAR3 = FUN9(VAR13, NULL, 0);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN10(VAR11);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN11();
 }
#endif
 }
}
static void FUN12()
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
void FUN13()
{
 FUN2();
 FUN12();
}
#endif
