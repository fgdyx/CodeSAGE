#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 goto VAR5;
VAR5:
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 wchar_t *VAR11;
 SOCKET VAR12 = VAR13;
 SOCKET VAR14 = VAR13;
 size_t VAR15 = wcslen(VAR2);
 do
 {
#ifdef VAR6
 if (FUN2(FUN3(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR12 = socket(VAR17, VAR18, VAR19);
 if (VAR12 == VAR13)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN4(VAR25);
 if (FUN5(VAR12, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN6(VAR12, VAR28) == VAR27)
 {
 break;
 }
 VAR14 = FUN7(VAR12, NULL, NULL);
 if (VAR14 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR14, (char *)(VAR2 + VAR15), sizeof(wchar_t) * (100 - VAR15 - 1), 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR2[VAR15 + VAR9 / sizeof(wchar_t)] = VAR4'';
 VAR11 = FUN8(VAR2, VAR4'');
 if (VAR11)
 {
 *VAR11 = VAR4'';
 }
 VAR11 = FUN8(VAR2, VAR4'');
 if (VAR11)
 {
 *VAR11 = VAR4'';
 }
 }
 while (0);
 if (VAR12 != VAR13)
 {
 FUN9(VAR12);
 }
 if (VAR14 != VAR13)
 {
 FUN9(VAR14);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN10();
 }
#endif
 }
 goto VAR29;
VAR29:
 {
 wchar_t VAR30[100] = VAR4"";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN11(VAR30, 100-1, VAR2);
 FUN12(VAR30);
 }
}
#endif
