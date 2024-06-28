#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3);
void FUN2()
{
 wchar_t * VAR4;
 VAR2<wchar_t *> VAR3;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR4 = VAR5;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 size_t VAR16 = wcslen(VAR4);
 do
 {
#ifdef VAR8
 if (FUN3(FUN4(2,2), &VAR9) != VAR17)
 {
 break;
 }
 VAR10 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR14 = socket(VAR18, VAR19, VAR20);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR21 = VAR18;
 VAR12.VAR22.VAR23 = FUN5(VAR24);
 VAR12.VAR25 = FUN6(VAR26);
 if (connect(VAR14, (struct VAR27*)&VAR12, sizeof(VAR12)) == VAR28)
 {
 break;
 }
 VAR11 = recv(VAR14, (char *)(VAR4 + VAR16), sizeof(wchar_t) * (VAR6 - VAR16 - 1), 0);
 if (VAR11 == VAR28 || VAR11 == 0)
 {
 break;
 }
 VAR4[VAR16 + VAR11 / sizeof(wchar_t)] = VAR7'';
 VAR13 = FUN7(VAR4, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 VAR13 = FUN7(VAR4, VAR7'');
 if (VAR13)
 {
 *VAR13 = VAR7'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN8(VAR14);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN9();
 }
#endif
 }
 VAR3.FUN10(VAR4);
 VAR3.FUN10(VAR4);
 VAR3.FUN10(VAR4);
 FUN1(VAR3);
}
#endif
