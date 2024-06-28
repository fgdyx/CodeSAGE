#ifndef VAR1
void FUN1(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2);
static void FUN2()
{
 size_t VAR3;
 CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2;
 VAR3 = 0;
 VAR3 = 20;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2);
static void FUN4()
{
 size_t VAR3;
 CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2;
 VAR3 = 0;
 VAR3 = rand();
 VAR2.VAR4 = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
