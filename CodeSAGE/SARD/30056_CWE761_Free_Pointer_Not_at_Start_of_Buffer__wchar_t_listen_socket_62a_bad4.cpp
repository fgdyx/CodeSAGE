#ifndef VAR1
void FUN1(wchar_t * &VAR2);
void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 FUN1(VAR2);
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR3''; VAR2++)
 {
 if (*VAR2 == VAR4)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
}
#endif
