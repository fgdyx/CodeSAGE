#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(1)
 {
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 wchar_t *VAR10;
 SOCKET VAR11 = VAR12;
 size_t VAR13 = wcslen(VAR2);
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR14)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR11 = socket(VAR15, VAR16, VAR17);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN4(VAR21);
 VAR9.VAR22 = FUN5(VAR23);
 if (connect(VAR11, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR11, (char *)(VAR2 + VAR13), sizeof(wchar_t) * (100 - VAR13 - 1), 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR2[VAR13 + VAR8 / sizeof(wchar_t)] = VAR4'';
 VAR10 = FUN6(VAR2, VAR4'');
 if (VAR10)
 {
 *VAR10 = VAR4'';
 }
 VAR10 = FUN6(VAR2, VAR4'');
 if (VAR10)
 {
 *VAR10 = VAR4'';
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN7(VAR11);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN8();
 }
#endif
 }
 }
 if(0)
 {
 FUN9("");
 }
 else
 {
 {
 wchar_t VAR26[100] = VAR4"";
 FUN10(VAR26, 100-1, VAR4"", VAR2);
 FUN11(VAR26);
 }
 }
}
static void FUN12()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(1)
 {
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 wchar_t *VAR10;
 SOCKET VAR11 = VAR12;
 size_t VAR13 = wcslen(VAR2);
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR14)
 {
 break;
 }
 VAR7 = 1;
#endif
 VAR11 = socket(VAR15, VAR16, VAR17);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN4(VAR21);
 VAR9.VAR22 = FUN5(VAR23);
 if (connect(VAR11, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR11, (char *)(VAR2 + VAR13), sizeof(wchar_t) * (100 - VAR13 - 1), 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR2[VAR13 + VAR8 / sizeof(wchar_t)] = VAR4'';
 VAR10 = FUN6(VAR2, VAR4'');
 if (VAR10)
 {
 *VAR10 = VAR4'';
 }
 VAR10 = FUN6(VAR2, VAR4'');
 if (VAR10)
 {
 *VAR10 = VAR4'';
 }
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN7(VAR11);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN8();
 }
#endif
 }
 }
 if(1)
 {
 {
 wchar_t VAR26[100] = VAR4"";
 FUN10(VAR26, 100-1, VAR4"", VAR2);
 FUN11(VAR26);
 }
 }
}
static void FUN13()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(0)
 {
 FUN9("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(1)
 {
 {
 wchar_t VAR26[100] = VAR4"";
 FUN10(VAR26, 100-1, VAR2);
 FUN11(VAR26);
 }
 }
}
static void FUN14()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(1)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(1)
 {
 {
 wchar_t VAR26[100] = VAR4"";
 FUN10(VAR26, 100-1, VAR2);
 FUN11(VAR26);
 }
 }
}
void FUN15()
{
 FUN1();
 FUN12();
 FUN13();
 FUN14();
}
#endif
