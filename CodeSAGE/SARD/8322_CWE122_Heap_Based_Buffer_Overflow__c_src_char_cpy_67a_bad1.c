#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67_structType VAR2;
 VAR3 = (char *)malloc(100*sizeof(char));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
