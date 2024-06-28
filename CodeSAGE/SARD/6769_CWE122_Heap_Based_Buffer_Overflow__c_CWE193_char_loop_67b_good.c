#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[10+1] = VAR6;
 size_t VAR7, VAR8;
 VAR8 = strlen(VAR5);
 for (VAR7 = 0; VAR7 < VAR8 + 1; VAR7++)
 {
 VAR3[VAR7] = VAR5[VAR7];
 }
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
