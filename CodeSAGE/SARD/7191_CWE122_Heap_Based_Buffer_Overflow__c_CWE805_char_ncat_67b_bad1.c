#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_ncat_67_structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 /* POTENTIAL FLAW: Possible buffer overflow if source is larger than sizeof(data)-strlen(data) */
 strncat(VAR3, VAR5, 100);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
