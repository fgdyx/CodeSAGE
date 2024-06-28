#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
#ifdef VAR3
 WSADATA VAR4;
 int VAR5 = 0;
#endif
 int VAR6;
 struct sockaddr_in VAR7;
 wchar_t *VAR8;
 SOCKET VAR9 = VAR10;
 size_t VAR11 = wcslen(VAR2);
 do
 {
#ifdef VAR3
 if (FUN2(FUN3(2,2), &VAR4) != VAR12)
 {
 break;
 }
 VAR5 = 1;
#endif
 /* POTENTIAL FLAW: Read data using a connect socket */
 VAR9 = socket(VAR13, VAR14, VAR15);
 if (VAR9 == VAR10)
 {
 break;
 }
 memset(&VAR7, 0, sizeof(VAR7));
 VAR7.VAR16 = VAR13;
 VAR7.VAR17.VAR18 = FUN4(VAR19);
 VAR7.VAR20 = FUN5(VAR21);
 if (connect(VAR9, (struct VAR22*)&VAR7, sizeof(VAR7)) == VAR23)
 {
 break;
 }
 VAR6 = recv(VAR9, (char *)(VAR2 + VAR11), sizeof(wchar_t) * (100 - VAR11 - 1), 0);
 if (VAR6 == VAR23 || VAR6 == 0)
 {
 break;
 }
 VAR2[VAR11 + VAR6 / sizeof(wchar_t)] = VAR24'';
 VAR8 = FUN6(VAR2, VAR24'');
 if (VAR8)
 {
 *VAR8 = VAR24'';
 }
 VAR8 = FUN6(VAR2, VAR24'');
 if (VAR8)
 {
 *VAR8 = VAR24'';
 }
 }
 while (0);
 if (VAR9 != VAR10)
 {
 FUN7(VAR9);
 }
#ifdef VAR3
 if (VAR5)
 {
 FUN8();
 }
#endif
 }
 return VAR2;
}
void FUN9()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR24'';
 VAR2 = FUN1(VAR2);
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR24''; VAR2++)
 {
 if (*VAR2 == VAR25)
 {
 FUN10("");
 break;
 }
 }
 free(VAR2);
}
#endif
