#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE806_wchar_t_ncat_34_unionType VAR3;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR4'', 100-1);
 VAR2[100-1] = VAR4'';
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 {
 wchar_t VAR7[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcsncat(VAR7, VAR2, wcslen(VAR2));
 VAR7[50-1] = VAR4'';
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
#endif
