#ifndef VAR1
void FUN1(CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE124_Buffer_Underwrite__malloc_wchar_t_memmove_67_structType VAR2;
 VAR3 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR3 = VAR4;
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
