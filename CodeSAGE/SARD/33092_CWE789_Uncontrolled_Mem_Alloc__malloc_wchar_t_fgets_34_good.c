#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_34_unionType VAR3;
 VAR2 = 0;
 VAR2 = 20;
 VAR3.VAR4 = VAR2;
 {
 size_t VAR2 = VAR3.VAR5;
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7))
 {
 VAR6 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_fgets_34_unionType VAR3;
 VAR2 = 0;
 {
 char VAR8[VAR9] = "";
 if (fgets(VAR8, VAR9, stdin) != NULL)
 {
 VAR2 = FUN5(VAR8, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 VAR3.VAR4 = VAR2;
 {
 size_t VAR2 = VAR3.VAR5;
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7) && VAR2 < 100)
 {
 VAR6 = (wchar_t *)malloc(VAR2*sizeof(wchar_t));
 wcscpy(VAR6, VAR7);
 FUN2(VAR6);
 free(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
