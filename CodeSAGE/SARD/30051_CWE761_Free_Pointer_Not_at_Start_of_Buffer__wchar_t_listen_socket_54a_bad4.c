#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 wchar_t *VAR9;
 SOCKET VAR10 = VAR11;
 SOCKET VAR12 = VAR11;
 size_t VAR13 = wcslen(VAR2);
 do
 {
#ifdef VAR4
 if (FUN3(FUN4(2,2), &VAR5) != VAR14)
 {
 break;
 }
 VAR6 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR10 = socket(VAR15, VAR16, VAR17);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR18 = VAR15;
 VAR8.VAR19.VAR20 = VAR21;
 VAR8.VAR22 = FUN5(VAR23);
 if (FUN6(VAR10, (struct VAR24*)&VAR8, sizeof(VAR8)) == VAR25)
 {
 break;
 }
 if (FUN7(VAR10, VAR26) == VAR25)
 {
 break;
 }
 VAR12 = FUN8(VAR10, NULL, NULL);
 if (VAR12 == VAR25)
 {
 break;
 }
 VAR7 = recv(VAR12, (char *)(VAR2 + VAR13), sizeof(wchar_t) * (100 - VAR13 - 1), 0);
 if (VAR7 == VAR25 || VAR7 == 0)
 {
 break;
 }
 VAR2[VAR13 + VAR7 / sizeof(wchar_t)] = VAR3'';
 VAR9 = FUN9(VAR2, VAR3'');
 if (VAR9)
 {
 *VAR9 = VAR3'';
 }
 VAR9 = FUN9(VAR2, VAR3'');
 if (VAR9)
 {
 *VAR9 = VAR3'';
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN10(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN10(VAR12);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN11();
 }
#endif
 }
 FUN1(VAR2);
}
#endif
