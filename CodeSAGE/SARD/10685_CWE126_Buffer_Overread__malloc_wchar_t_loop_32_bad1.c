#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR2 = *VAR3;
 /* FLAW: Use a small buffer */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 size_t VAR6, VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR5'', 100-1);
 VAR8[100-1] = VAR5'';
 VAR7 = wcslen(VAR8);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR8[VAR6] = VAR2[VAR6];
 }
 VAR8[100-1] = VAR5'';
 FUN2(VAR8);
 free(VAR2);
 }
 }
}
#endif
