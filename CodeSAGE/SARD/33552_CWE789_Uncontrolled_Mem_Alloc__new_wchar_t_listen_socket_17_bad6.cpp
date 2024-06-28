#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 size_t VAR4;
 VAR4 = 0;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 SOCKET VAR10 = VAR11;
 SOCKET VAR12 = VAR11;
 char VAR13[VAR14];
 do
 {
#ifdef VAR5
 if (FUN2(FUN3(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR10 = socket(VAR16, VAR17, VAR18);
 if (VAR10 == VAR11)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN4(VAR24);
 if (FUN5(VAR10, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN6(VAR10, VAR27) == VAR26)
 {
 break;
 }
 VAR12 = FUN7(VAR10, NULL, NULL);
 if (VAR12 == VAR26)
 {
 break;
 }
 VAR8 = recv(VAR12, VAR13, VAR14 - 1, 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR13[VAR8] = '';
 VAR4 = FUN8(VAR13, NULL, 0);
 }
 while (0);
 if (VAR10 != VAR11)
 {
 FUN9(VAR10);
 }
 if (VAR12 != VAR11)
 {
 FUN9(VAR12);
 }
#ifdef VAR5
 if (VAR7)
 {
 FUN10();
 }
#endif
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 wchar_t * VAR28;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the wcscpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR4 > wcslen(VAR29))
 {
 VAR28 = new wchar_t[VAR4];
 wcscpy(VAR28, VAR29);
 FUN11(VAR28);
 delete [] VAR28;
 }
 else
 {
 FUN12("");
 }
 }
 }
}
#endif
