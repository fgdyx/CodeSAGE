#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_src_char_cpy_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 strcpy(VAR5, VAR3);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
