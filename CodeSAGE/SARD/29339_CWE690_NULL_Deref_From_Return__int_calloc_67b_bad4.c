#ifndef VAR1
void FUN1(CWE690_NULL_Deref_From_Return__int_calloc_67_structType VAR2)
{
 int * VAR3 = VAR2.VAR4;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0] = 5;
 FUN2(VAR3[0]);
 free(VAR3);
}
#endif
