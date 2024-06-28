#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_67_structType VAR2);
static void FUN2()
{
 int * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_67_structType VAR2;
 VAR3 = NULL;
 VAR3 = (int *)malloc(10*sizeof(int));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
