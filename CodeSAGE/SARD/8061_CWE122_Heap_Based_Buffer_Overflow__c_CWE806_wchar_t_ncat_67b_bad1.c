#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[50] = VAR6"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcsncat(VAR5, VAR3, wcslen(VAR3));
 VAR5[50-1] = VAR6'';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
