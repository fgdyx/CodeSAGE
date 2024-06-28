#ifndef VAR1
void FUN1()
{
 int * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__CWE131_loop_34_unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Allocate memory without using sizeof(int) */
 VAR2 = (int *)malloc(10);
 VAR3.VAR4 = VAR2;
 {
 int * VAR2 = VAR3.VAR5;
 {
 int VAR6[10] = {0};
 size_t VAR7;
 /* POTENTIAL FLAW: Possible buffer overflow if data was not allocated correctly in the source */
 for (VAR7 = 0; VAR7 < 10; VAR7++)
 {
 VAR2[VAR7] = VAR6[VAR7];
 }
 FUN2(VAR2[0]);
 free(VAR2);
 }
 }
}
#endif
