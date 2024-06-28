#ifndef VAR1
void FUN1()
{
 char * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_34_unionType VAR3;
 VAR2 = (char *)malloc(100*sizeof(char));
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[50] = "";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-strlen(dest)*/
 strcat(VAR6, VAR2);
 FUN2(VAR2);
 free(VAR2);
 }
 }
}
#endif
