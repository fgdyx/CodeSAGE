#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67_structType VAR2;
 VAR3 = NULL;
 VAR3 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
