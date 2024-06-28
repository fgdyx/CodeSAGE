#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 wchar_t * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
 return VAR2;
}
void FUN3()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR6'';
 VAR2 = FUN1(VAR2);
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR6''; VAR2++)
 {
 if (*VAR2 == VAR7)
 {
 FUN4("");
 break;
 }
 }
 free(VAR2);
}
#endif
