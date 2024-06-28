#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__sizeof_double_67_structType VAR2)
{
 double * VAR3 = VAR2.VAR4;
 /* POTENTIAL FLAW: Attempt to use data, which may not have enough memory allocated */
 FUN2(*VAR3);
 free(VAR3);
}
#endif
