#ifndef VAR1
static void FUN1()
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
 size_t VAR12 = wcslen(VAR2);
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 VAR10 = socket(VAR14, VAR15, VAR16);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR8, 0, sizeof(VAR8));
 VAR8.VAR17 = VAR14;
 VAR8.VAR18.VAR19 = FUN4(VAR20);
 VAR8.VAR21 = FUN5(VAR22);
 if (connect(VAR10, (struct VAR23*)&VAR8, sizeof(VAR8)) == VAR24)
 {
 break;
 }
 VAR7 = recv(VAR10, (char *)(VAR2 + VAR12), sizeof(wchar_t) * (100 - VAR12 - 1), 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR2[VAR12 + VAR7 / sizeof(wchar_t)] = VAR3'';
 VAR9 = FUN6(VAR2, VAR3'');
 if (VAR9)
 {
 *VAR9 = VAR3'';
 }
 VAR9 = FUN6(VAR2, VAR3'');
 if (VAR9)
 {
 *VAR9 = VAR3'';
 }
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN7(VAR10);
 }
#ifdef VAR4
 if (VAR6)
 {
 FUN8();
 }
#endif
 }
 VAR25* VAR26 = new VAR27;
 VAR26->FUN9(VAR2);
 delete VAR26;
}
void FUN10()
{
 FUN1();
}
#endif
