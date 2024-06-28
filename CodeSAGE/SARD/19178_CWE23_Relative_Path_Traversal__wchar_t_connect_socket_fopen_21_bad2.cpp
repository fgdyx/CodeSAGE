#ifndef VAR1
static int VAR2 = 0;
static wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
#ifdef VAR4
 WSADATA VAR5;
 int VAR6 = 0;
#endif
 int VAR7;
 struct sockaddr_in VAR8;
 wchar_t *VAR9;
 SOCKET VAR10 = VAR11;
 size_t VAR12 = wcslen(VAR3);
 do
 {
#ifdef VAR4
 if (FUN2(FUN3(2,2), &VAR5) != VAR13)
 {
 break;
 }
 VAR6 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
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
 VAR7 = recv(VAR10, (char *)(VAR3 + VAR12), sizeof(wchar_t) * (VAR25 - VAR12 - 1), 0);
 if (VAR7 == VAR24 || VAR7 == 0)
 {
 break;
 }
 VAR3[VAR12 + VAR7 / sizeof(wchar_t)] = VAR26'';
 VAR9 = FUN6(VAR3, VAR26'');
 if (VAR9)
 {
 *VAR9 = VAR26'';
 }
 VAR9 = FUN6(VAR3, VAR26'');
 if (VAR9)
 {
 *VAR9 = VAR26'';
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
 }
 return VAR3;
}
void FUN9()
{
 wchar_t * VAR3;
 wchar_t VAR27[VAR25] = VAR28;
 VAR3 = VAR27;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 VAR29 *VAR30 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR30 = FUN10(VAR3, VAR26"");
 if (VAR30 != NULL)
 {
 fclose(VAR30);
 }
 }
 ;
}
#endif
