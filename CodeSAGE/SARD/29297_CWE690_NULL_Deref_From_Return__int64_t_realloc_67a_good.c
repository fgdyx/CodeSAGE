#ifndef VAR1
void FUN1(CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType VAR2;
 VAR4 = NULL;
 VAR4 = (VAR3 *)realloc(VAR4, 1*sizeof(VAR3));
 VAR2.VAR5 = VAR4;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
