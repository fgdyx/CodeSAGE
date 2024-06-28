#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_34_unionType VAR3;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 {
 wchar_t VAR7[50] = VAR4"";
 wcscat(VAR7, VAR2);
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
