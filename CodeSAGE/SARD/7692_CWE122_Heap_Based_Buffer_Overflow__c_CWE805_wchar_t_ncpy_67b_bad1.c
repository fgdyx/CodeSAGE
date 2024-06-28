#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_ncpy_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 wcsncpy(VAR3, VAR5, 100-1);
 VAR3[100-1] = VAR6'';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
