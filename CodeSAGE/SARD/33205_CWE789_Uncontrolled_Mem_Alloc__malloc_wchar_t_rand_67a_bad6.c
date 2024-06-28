#ifndef VAR1
void FUN1(CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2);
void FUN2()
{
 size_t VAR3;
 CWE789_Uncontrolled_Mem_Alloc__malloc_wchar_t_rand_67_structType VAR2;
 VAR3 = 0;
 /* POTENTIAL FLAW: Set data to a random value */
 VAR3 = rand();
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
