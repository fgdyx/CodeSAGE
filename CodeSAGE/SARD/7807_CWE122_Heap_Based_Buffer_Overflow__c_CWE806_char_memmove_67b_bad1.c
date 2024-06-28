#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_memmove_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 memmove(VAR5, VAR3, strlen(VAR3)*sizeof(char));
 VAR5[50-1] = '';
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
