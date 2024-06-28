#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR3''; VAR2++)
 {
 if (*VAR2 == VAR4)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
#ifdef VAR5
 WSADATA VAR6;
 int VAR7 = 0;
#endif
 int VAR8;
 struct sockaddr_in VAR9;
 wchar_t *VAR10;
 SOCKET VAR11 = VAR12;
 SOCKET VAR13 = VAR12;
 size_t VAR14 = wcslen(VAR2);
 do
 {
#ifdef VAR5
 if (FUN4(FUN5(2,2), &VAR6) != VAR15)
 {
 break;
 }
 VAR7 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a listen socket */
 VAR11 = socket(VAR16, VAR17, VAR18);
 if (VAR11 == VAR12)
 {
 break;
 }
 memset(&VAR9, 0, sizeof(VAR9));
 VAR9.VAR19 = VAR16;
 VAR9.VAR20.VAR21 = VAR22;
 VAR9.VAR23 = FUN6(VAR24);
 if (FUN7(VAR11, (struct VAR25*)&VAR9, sizeof(VAR9)) == VAR26)
 {
 break;
 }
 if (FUN8(VAR11, VAR27) == VAR26)
 {
 break;
 }
 VAR13 = FUN9(VAR11, NULL, NULL);
 if (VAR13 == VAR26)
 {
 break;
 }
 VAR8 = recv(VAR13, (char *)(VAR2 + VAR14), sizeof(wchar_t) * (100 - VAR14 - 1), 0);
 if (VAR8 == VAR26 || VAR8 == 0)
 {
 break;
 }
 VAR2[VAR14 + VAR8 / sizeof(wchar_t)] = VAR3'';
 VAR10 = FUN10(VAR2, VAR3'');
 if (VAR10)
 {
 *VAR10 = VAR3'';
 }
 VAR10 = FUN10(VAR2, VAR3'');
 if (VAR10)
 {
 *VAR10 = VAR3'';
 }
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
#ifdef VAR5
 if (VAR7)
 {
 FUN12();
 }
#endif
 }
 FUN1(VAR2);
}
#endif
