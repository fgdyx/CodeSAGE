#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE126_Buffer_Overread__malloc_wchar_t_memcpy_34_unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR4'', 100-1);
 VAR7[100-1] = VAR4'';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR7, VAR2, wcslen(VAR7)*sizeof(wchar_t));
 VAR7[100-1] = VAR4'';
 FUN2(VAR7);
 free(VAR2);
 }
 }
}
#endif
