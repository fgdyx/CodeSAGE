#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3;
 for (VAR3=0; VAR3 < wcslen(VAR2); VAR3++)
 {
 if (VAR2[VAR3] == VAR4)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR7'';
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 size_t VAR16 = wcslen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN4(FUN5(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR14 = socket(VAR18, VAR19, VAR20);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN6(VAR24);
 VAR12.VAR25 = FUN7(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR2 + VAR16), sizeof(wchar_t) * (100 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR16 + VAR11 / sizeof(wchar_t)] = VAR7'';
 VAR13 = FUN8(VAR2, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 VAR13 = FUN8(VAR2, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN9(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN10();
 }
#endif
 }
 FUN11(VAR2);
}
void FUN12()
{
 FUN3();
}
#endif
