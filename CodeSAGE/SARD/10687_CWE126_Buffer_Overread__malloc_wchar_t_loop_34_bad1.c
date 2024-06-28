#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE126_Buffer_Overread__malloc_wchar_t_loop_34_unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Use a small buffer */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 {
 size_t VAR7, VAR8;
 wchar_t VAR9[100];
 wmemset(VAR9, VAR4'', 100-1);
 VAR9[100-1] = VAR4'';
 VAR8 = wcslen(VAR9);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR9[VAR7] = VAR2[VAR7];
 }
 VAR9[100-1] = VAR4'';
 FUN2(VAR9);
 free(VAR2);
 }
 }
}
#endif
