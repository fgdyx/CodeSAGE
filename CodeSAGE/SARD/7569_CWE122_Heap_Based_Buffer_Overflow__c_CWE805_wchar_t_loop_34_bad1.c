#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE805_wchar_t_loop_34_unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
 VAR2[0] = VAR4'';
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 {
 size_t VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR4'', 100-1);
 VAR8[100-1] = VAR4'';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than data */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR8[VAR7];
 }
 VAR2[100-1] = VAR4'';
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
#endif
