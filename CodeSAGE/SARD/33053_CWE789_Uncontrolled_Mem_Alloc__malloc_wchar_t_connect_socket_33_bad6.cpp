#ifndef VAR1
void FUN1()
{
 size_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0;
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 char VAR12[VAR13];
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR14)
 {
 break;
 }
 VAR7 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR10 = socket(VAR15, VAR16, VAR17);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR18 = VAR15;
 VAR9.VAR19.VAR20 = FUN4(VAR21);
 VAR9.VAR22 = FUN5(VAR23);
 if (connect(VAR10, (struct VAR24*)&VAR9, sizeof(VAR9)) == VAR25)
 {
 break;
 }
 VAR8 = recv(VAR10, VAR12, VAR13 - 1, 0);
 if (VAR8 == VAR25 || VAR8 == 0)
 {
 break;
 }
 VAR12[VAR8] = '';
 VAR2 = FUN6(VAR12, NULL, 0);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN7(VAR10);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN8();
 }
#endif
 }
 {
 size_t VAR2 = VAR4;
 {
 wchar_t * VAR26;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR2 > wcslen(VAR27))
 {
 VAR26 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR26, VAR27);
 FUN9(VAR26);
 free(VAR26);
 }
 else
 {
 FUN10("");
 }
 }
 }
}
#endif
