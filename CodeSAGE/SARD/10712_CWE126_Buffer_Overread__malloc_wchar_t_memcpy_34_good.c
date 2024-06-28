#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE126_Buffer_Overread__malloc_wchar_t_memcpy_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 {
 wchar_t VAR7[100];
 wmemset(VAR7, VAR4'', 100-1);
 VAR7[100-1] = VAR4'';
 memcpy(VAR7, VAR2, wcslen(VAR7)*sizeof(wchar_t));
 VAR7[100-1] = VAR4'';
 FUN2(VAR7);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
