#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType VAR2);
void FUN2()
{
 double * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType VAR2;
 VAR3 = NULL;
 /* FLAW: Using sizeof the pointer and not the data type in malloc() */
 VAR3 = (double *)malloc(sizeof(VAR3));
 *VAR3 = 1.7E300;
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
