#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (char *)malloc((10+1)*sizeof(char));
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[10+1] = VAR7;
 strncpy(VAR2, VAR6, strlen(VAR6) + 1);
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
