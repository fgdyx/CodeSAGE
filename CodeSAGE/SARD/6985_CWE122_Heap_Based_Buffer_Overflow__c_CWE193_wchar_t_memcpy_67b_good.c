#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[10+1] = VAR6;
 memcpy(VAR3, VAR5, (wcslen(VAR5) + 1) * sizeof(wchar_t));
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
