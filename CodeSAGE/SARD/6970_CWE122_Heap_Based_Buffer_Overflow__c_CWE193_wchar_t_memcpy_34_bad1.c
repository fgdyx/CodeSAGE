#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE193_wchar_t_memcpy_34_unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (wchar_t *)malloc(10*sizeof(wchar_t));
 VAR3.VAR4 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR5;
 {
 wchar_t VAR6[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 memcpy(VAR2, VAR6, (wcslen(VAR6) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
#endif
