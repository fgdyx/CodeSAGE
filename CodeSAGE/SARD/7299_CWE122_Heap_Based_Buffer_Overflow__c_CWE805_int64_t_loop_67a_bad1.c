#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_structType VAR2);
void FUN2()
{
 VAR3 * VAR4;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_structType VAR2;
 VAR4 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = (VAR3 *)malloc(50*sizeof(VAR3));
 VAR2.VAR5 = VAR4;
 FUN1(VAR2);
}
#endif
