#ifndef VAR1
void FUN1(CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE126_Buffer_Overread__malloc_wchar_t_memmove_67_structType VAR2;
 VAR3 = NULL;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
