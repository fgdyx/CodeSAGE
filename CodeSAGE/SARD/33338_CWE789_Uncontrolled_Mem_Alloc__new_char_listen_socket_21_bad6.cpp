#ifndef VAR1
static int VAR2 = 0;
static void FUN1(size_t VAR3)
{
 if(VAR2)
 {
 {
 char * VAR4;
 /* POTENTIAL FLAW: No MAXIMUM limitation for memory allocation, but ensure data is large enough
 * for the strcpy() function to not cause a buffer overflow */
 /* INCIDENTAL FLAW: The source could cause a type overrun in data or in the memory allocation */
 if (VAR3 > strlen(VAR5))
 {
 VAR4 = new char[VAR3];
 strcpy(VAR4, VAR5);
 FUN2(VAR4);
 delete [] VAR4;
 }
 else
 {
 FUN2("");
 }
 }
 }
}
void FUN3()
{
 size_t VAR3;
 VAR3 = 0;
 {
#ifdef VAR6
 WSADATA VAR7;
 int VAR8 = 0;
#endif
 int VAR9;
 struct sockaddr_in VAR10;
 SOCKET VAR11 = VAR12;
 SOCKET VAR13 = VAR12;
 char VAR14[VAR15];
 do
 {
#ifdef VAR6
 if (FUN4(FUN5(2,2), &VAR7) != VAR16)
 {
 break;
 }
 VAR8 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR11 = socket(VAR17, VAR18, VAR19);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR10, 0, sizeof(VAR10));
 VAR10.VAR20 = VAR17;
 VAR10.VAR21.VAR22 = VAR23;
 VAR10.VAR24 = FUN6(VAR25);
 if (FUN7(VAR11, (struct VAR26*)&VAR10, sizeof(VAR10)) == VAR27)
 {
 break;
 }
 if (FUN8(VAR11, VAR28) == VAR27)
 {
 break;
 }
 VAR13 = FUN9(VAR11, NULL, NULL);
 if (VAR13 == VAR27)
 {
 break;
 }
 VAR9 = recv(VAR13, VAR14, VAR15 - 1, 0);
 if (VAR9 == VAR27 || VAR9 == 0)
 {
 break;
 }
 VAR14[VAR9] = '';
 VAR3 = FUN10(VAR14, NULL, 0);
 }
 while (0);
 if (VAR11 != VAR12)
 {
 FUN11(VAR11);
 }
 if (VAR13 != VAR12)
 {
 FUN11(VAR13);
 }
#ifdef VAR6
 if (VAR8)
 {
 FUN12();
 }
#endif
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
