#ifndef VAR1
void FUN1(CWE690_NULL_Deref_From_Return__int_calloc_67_structType VAR2);
static void FUN2()
{
 int * VAR3;
 CWE690_NULL_Deref_From_Return__int_calloc_67_structType VAR2;
 VAR3 = NULL;
 VAR3 = (int *)calloc(1, sizeof(int));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
