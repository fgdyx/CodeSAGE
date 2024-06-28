#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE805_char_memcpy_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (char *)malloc(100*sizeof(char));
 VAR2[0] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memcpy(VAR2, VAR6, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
