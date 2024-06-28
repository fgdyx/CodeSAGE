#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__c_dest_wchar_t_cpy_67_structType VAR2;
 VAR3 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
