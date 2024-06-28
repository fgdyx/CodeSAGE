#ifndef VAR1
static void FUN1()
{
 size_t VAR2 = VAR3;
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5))
 {
 VAR4 = new char[VAR2];
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 size_t VAR2 = VAR6;
 {
 char * VAR4;
 if (VAR2 > strlen(VAR5) && VAR2 < 100)
 {
 VAR4 = new char[VAR2];
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN5()
{
 size_t VAR2;
 VAR2 = 0;
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
 if (FUN6(FUN7(2,2), &VAR8) != VAR16)
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
 VAR11.VAR21.VAR22 = FUN8(VAR23);
 VAR11.VAR24 = FUN9(VAR25);
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
 VAR2 = FUN10(VAR14, NULL, 0);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN11(VAR12);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN12();
 }
#endif
 }
 VAR6 = VAR2;
 FUN4();
}
void FUN13()
{
 FUN3();
 FUN5();
}
#endif
