#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_67_structType VAR2);
static void FUN2()
{
 char * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE806_char_snprintf_67_structType VAR2;
 VAR3 = (char *)malloc(100*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
