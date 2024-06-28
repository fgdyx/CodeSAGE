#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_67_structType VAR2)
{
 VAR3 * VAR4 = VAR2.VAR5;
 {
 int64_t VAR6[100] = {0};
 {
 size_t VAR7;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR4[VAR7] = VAR6[VAR7];
 }
 FUN2(VAR4[0]);
 free(VAR4);
 }
 }
}
#endif
