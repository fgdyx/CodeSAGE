#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE805_int64_t_loop_34_unionType VAR4;
 VAR3 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (VAR2 *)malloc(50*sizeof(VAR2));
 VAR4.VAR5 = VAR3;
 {
 VAR2 * VAR3 = VAR4.VAR6;
 {
 int64_t VAR7[100] = {0};
 {
 size_t VAR8;
 /* POTENTIAL FLAW: Possible buffer overflow if data < 100 */
 for (VAR8 = 0; VAR8 < 100; VAR8++)
 {
 VAR3[VAR8] = VAR7[VAR8];
 }
 FUN2(VAR3[0]);
 free(VAR3);
 }
 }
 }
}
#endif
