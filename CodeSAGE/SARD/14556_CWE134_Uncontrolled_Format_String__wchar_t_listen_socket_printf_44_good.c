#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 FUN2(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 wcscpy(VAR2, VAR6"");
 FUN4(VAR2);
}
static void FUN5(wchar_t * VAR2)
{
 FUN2(VAR6"", VAR2);
}
static void FUN6()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR7;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
#ifdef VAR8
 WSADATA VAR9;
 int VAR10 = 0;
#endif
 int VAR11;
 struct sockaddr_in VAR12;
 wchar_t *VAR13;
 SOCKET VAR14 = VAR15;
 SOCKET VAR16 = VAR15;
 size_t VAR17 = wcslen(VAR2);
 do
 {
#ifdef VAR8
 if (FUN7(FUN8(2,2), &VAR9) != VAR18)
 {
 break;
 }
 VAR10 = 1;
#endif
 VAR14 = socket(VAR19, VAR20, VAR21);
 if (VAR14 == VAR15)
 {
 break;
 }
 memset(&VAR12, 0, sizeof(VAR12));
 VAR12.VAR22 = VAR19;
 VAR12.VAR23.VAR24 = VAR25;
 VAR12.VAR26 = FUN9(VAR27);
 if (FUN10(VAR14, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN11(VAR14, VAR30) == VAR29)
 {
 break;
 }
 VAR16 = FUN12(VAR14, NULL, NULL);
 if (VAR16 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR16, (char *)(VAR2 + VAR17), sizeof(wchar_t) * (100 - VAR17 - 1), 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR17 + VAR11 / sizeof(wchar_t)] = VAR6'';
 VAR13 = FUN13(VAR2, VAR6'');
 if (VAR13)
 {
 *VAR13 = VAR6'';
 }
 VAR13 = FUN13(VAR2, VAR6'');
 if (VAR13)
 {
 *VAR13 = VAR6'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN14(VAR14);
 }
 if (VAR16 != VAR15)
 {
 FUN14(VAR16);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN15();
 }
#endif
 }
 FUN4(VAR2);
}
void FUN16()
{
 FUN3();
 FUN6();
}
#endif
