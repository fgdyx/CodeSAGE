#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 VAR5 * VAR6;
 if (100-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR2+VAR4, (int)(100-VAR4), VAR6) == NULL)
 {
 FUN3("");
 VAR2[VAR4] = VAR3'';
 }
 fclose(VAR6);
 }
 }
 }
 if(VAR8==5)
 {
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR3''; VAR2++)
 {
 if (*VAR2 == VAR9)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
}
#endif
