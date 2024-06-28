#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__CWE131_memmove_67_structType VAR2)
{
 int * VAR3 = VAR2.VAR4;
 {
 int VAR5[10] = {0};
 memmove(VAR3, VAR5, 10*sizeof(int));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
