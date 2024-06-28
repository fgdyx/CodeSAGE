#ifndef VAR1
void FUN1(CWE690_NULL_Deref_From_Return__int64_t_realloc_67_structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR4[0] = 5LL;
 FUN2(VAR4[0]);
 free(VAR4);
}
#endif
