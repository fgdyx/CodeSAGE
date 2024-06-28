#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 FUN2(VAR5, strlen(VAR3), "", VAR3);
 FUN3(VAR3);
 free(VAR3);
 }
}
#endif
