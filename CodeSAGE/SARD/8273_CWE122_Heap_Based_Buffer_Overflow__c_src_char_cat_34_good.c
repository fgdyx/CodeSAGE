#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_src_char_cat_34_unionType VAR3;
 VAR2 = (char *)malloc(100*sizeof(char));
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 VAR3.VAR4 = VAR2;
 {
 char * VAR2 = VAR3.VAR5;
 {
 char VAR6[50] = "";
 strcat(VAR6, VAR2);
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
