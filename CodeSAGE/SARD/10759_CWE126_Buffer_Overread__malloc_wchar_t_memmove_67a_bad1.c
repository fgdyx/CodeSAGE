#ifndef VAR1
void FUN1(CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType VAR2;
 VAR3 = NULL;
 /* FLAW: Use a small buffer */
 VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
