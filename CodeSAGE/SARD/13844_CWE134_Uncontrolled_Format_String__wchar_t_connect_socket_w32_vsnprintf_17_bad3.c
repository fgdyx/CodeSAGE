#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
void FUN5()
{
 int VAR6,VAR7;
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 {
#ifdef VAR9
 WSADATA VAR10;
 int VAR11 = 0;
#endif
 int VAR12;
 struct sockaddr_in VAR13;
 wchar_t *VAR14;
 SOCKET VAR15 = VAR16;
 size_t VAR17 = wcslen(VAR2);
 do
 {
#ifdef VAR9
 if (FUN6(FUN7(2,2), &VAR10) != VAR18)
 {
 break;
 }
 VAR11 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR15 = socket(VAR19, VAR20, VAR21);
 if (VAR15 == VAR16)
 {
 break;
 }
 memset(&VAR13, 0, sizeof(VAR13));
 VAR13.VAR22 = VAR19;
 VAR13.VAR23.VAR24 = FUN8(VAR25);
 VAR13.VAR26 = FUN9(VAR27);
 if (connect(VAR15, (struct VAR28*)&VAR13, sizeof(VAR13)) == VAR29)
 {
 break;
 }
 VAR12 = recv(VAR15, (char *)(VAR2 + VAR17), sizeof(wchar_t) * (100 - VAR17 - 1), 0);
 if (VAR12 == VAR29 || VAR12 == 0)
 {
 break;
 }
 VAR2[VAR17 + VAR12 / sizeof(wchar_t)] = VAR4'';
 VAR14 = FUN10(VAR2, VAR4'');
 if (VAR14)
 {
 *VAR14 = VAR4'';
 }
 VAR14 = FUN10(VAR2, VAR4'');
 if (VAR14)
 {
 *VAR14 = VAR4'';
 }
 }
 while (0);
 if (VAR15 != VAR16)
 {
 FUN11(VAR15);
 }
#ifdef VAR9
 if (VAR11)
 {
 FUN12();
 }
#endif
 }
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
