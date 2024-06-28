#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 VAR2 = 20;
 {
 size_t VAR2 = VAR4;
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
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
 if (FUN5(FUN6(2,2), &VAR8) != VAR16)
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
 VAR11.VAR21.VAR22 = FUN7(VAR23);
 VAR11.VAR24 = FUN8(VAR25);
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
 VAR2 = FUN9(VAR14, NULL, 0);
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN10(VAR12);
 }
#ifdef VAR7
 if (VAR9)
 {
 FUN11();
 }
#endif
 }
 {
 size_t VAR2 = VAR4;
 {
 wchar_t * VAR5;
 if (VAR2 > wcslen(VAR6) && VAR2 < 100)
 {
 VAR5 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN12()
{
 FUN1();
 FUN4();
}
#endif
