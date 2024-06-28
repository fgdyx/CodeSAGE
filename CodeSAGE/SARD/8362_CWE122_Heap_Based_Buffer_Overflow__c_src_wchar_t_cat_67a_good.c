#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType VAR2;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
