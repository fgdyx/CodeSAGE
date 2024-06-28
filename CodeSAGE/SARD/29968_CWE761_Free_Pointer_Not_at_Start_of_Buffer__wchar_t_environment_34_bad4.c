#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_34_unionType VAR3;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR4'';
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR3.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR9;
 /* FLAW: We are incrementing the pointer in the loop - this will cause us to free the
 * memory block not at the start of the buffer */
 for (; *VAR2 != VAR4''; VAR2++)
 {
 if (*VAR2 == VAR10)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
}
#endif
