#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_structType VAR2);
void FUN2()
{
 char * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_loop_67_structType VAR2;
 VAR3 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR3 = (char *)malloc(10*sizeof(char));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
