#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR4''; VAR2++)
 {
 if (*VAR2 == VAR5)
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
 VAR2[0] = VAR4'';
 {
 size_t VAR6 = wcslen(VAR2);
 if (100-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN4(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR4'')
 {
 VAR2[VAR6-1] = VAR4'';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR6] = VAR4'';
 }
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
