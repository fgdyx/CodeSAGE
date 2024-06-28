#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR5'';
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 wchar_t *VAR11;
 SOCKET VAR12 = VAR13;
 size_t VAR14 = wcslen(VAR2);
 do
 {
#ifdef VAR6
 if (FUN3(FUN4(2,2), &VAR7) != VAR15)
 {
 break;
 }
 VAR8 = 1;
#endif
 VAR12 = socket(VAR16, VAR17, VAR18);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR19 = VAR16;
 VAR10.VAR20.VAR21 = FUN5(VAR22);
 VAR10.VAR23 = FUN6(VAR24);
 if (connect(VAR12, (struct VAR25*)&VAR10, sizeof(VAR10)) == VAR26)
 {
 break;
 }
 VAR9 = recv(VAR12, (char *)(VAR2 + VAR14), sizeof(wchar_t) * (100 - VAR14 - 1), 0);
 if (VAR9 == VAR26 || VAR9 == 0)
 {
 break;
 }
 VAR2[VAR14 + VAR9 / sizeof(wchar_t)] = VAR5'';
 VAR11 = FUN7(VAR2, VAR5'');
 if (VAR11)
 {
 *VAR11 = VAR5'';
 }
 VAR11 = FUN7(VAR2, VAR5'');
 if (VAR11)
 {
 *VAR11 = VAR5'';
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN8(VAR12);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN9();
 }
#endif
 }
 FUN10(VAR2);
}
void FUN11()
{
 FUN2();
}
#endif
