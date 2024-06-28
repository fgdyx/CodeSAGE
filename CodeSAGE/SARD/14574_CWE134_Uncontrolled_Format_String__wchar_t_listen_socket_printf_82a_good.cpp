#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 VAR5* VAR6 = new VAR7;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
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
 if (FUN4(FUN5(2,2), &VAR9) != VAR18)
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
 VAR12.VAR26 = FUN6(VAR27);
 if (FUN7(VAR14, (struct VAR28*)&VAR12, sizeof(VAR12)) == VAR29)
 {
 break;
 }
 if (FUN8(VAR14, VAR30) == VAR29)
 {
 break;
 }
 VAR16 = FUN9(VAR14, NULL, NULL);
 if (VAR16 == VAR29)
 {
 break;
 }
 VAR11 = recv(VAR16, (char *)(VAR2 + VAR17), sizeof(wchar_t) * (100 - VAR17 - 1), 0);
 if (VAR11 == VAR29 || VAR11 == 0)
 {
 break;
 }
 VAR2[VAR17 + VAR11 / sizeof(wchar_t)] = VAR4'';
 VAR13 = FUN10(VAR2, VAR4'');
 if (VAR13)
 {
 *VAR13 = VAR4'';
 }
 VAR13 = FUN10(VAR2, VAR4'');
 if (VAR13)
 {
 *VAR13 = VAR4'';
 }
 }
 while (0);
 if (VAR14 != VAR15)
 {
 FUN11(VAR14);
 }
 if (VAR16 != VAR15)
 {
 FUN11(VAR16);
 }
#ifdef VAR8
 if (VAR10)
 {
 FUN12();
 }
#endif
 }
 VAR5* VAR6 = new VAR31;
 VAR6->FUN2(VAR2);
 delete VAR6;
}
void FUN13()
{
 FUN1();
 FUN3();
}
#endif
