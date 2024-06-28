#ifndef VAR1
void FUN1(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 wchar_t * VAR5;
 if (VAR3 > wcslen(VAR6))
 {
 VAR5 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN4(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2)
{
 size_t VAR3 = VAR2.VAR4;
 {
 wchar_t * VAR5;
 if (VAR3 > wcslen(VAR6) && VAR3 < 100)
 {
 VAR5 = (wchar_t *)malloc(VAR3*sizeof(wchar_t));
 wcscpy(VAR5, VAR6);
 FUN2(VAR5);
 free(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
