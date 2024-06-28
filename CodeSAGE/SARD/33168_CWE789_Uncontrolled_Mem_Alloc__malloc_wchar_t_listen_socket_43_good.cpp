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
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5))
 {
 VAR4 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 free(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5(VAR2 &VAR3)
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
 if (FUN6(FUN7(2,2), &VAR7) != VAR16)
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
 VAR10.VAR24 = FUN8(VAR25);
 if (FUN9(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN10(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN11(VAR11, NULL, NULL);
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
 VAR3 = FUN12(VAR14, NULL, 0);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN13(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN13(VAR13);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN14();
 }
#endif
 }
}
static void FUN15()
{
 size_t VAR3;
 VAR3 = 0;
 FUN5(VAR3);
 {
 wchar_t * VAR4;
 if (VAR3 > wcslen(VAR5) && VAR3 < 100)
 {
 VAR4 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR4, VAR5);
 FUN3(VAR4);
 free(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN16()
{
 FUN2();
 FUN15();
}
#endif
