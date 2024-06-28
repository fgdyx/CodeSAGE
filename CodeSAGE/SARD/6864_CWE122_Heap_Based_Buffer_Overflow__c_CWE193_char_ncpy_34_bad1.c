#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_CWE193_char_ncpy_34_unionType VAR3;
 VAR2 = NULL;
 /* FLAW: Did not leave space for a null terminator */
 VAR2 = (char *)malloc(10*sizeof(char));
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[10+1] = VAR7;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 strncpy(VAR2, VAR6, strlen(VAR6) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
#endif
