#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_structType VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_structType VAR2;
 VAR4 = NULL;
 VAR4 = (VAR3 *)malloc(100*sizeof(VAR3));
 VAR2.VAR5 = VAR4;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
