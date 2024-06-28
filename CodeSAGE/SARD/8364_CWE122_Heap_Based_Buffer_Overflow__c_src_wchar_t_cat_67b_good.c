#ifndef VAR1
void FUN1(CWE122_Heap_Based_Buffer_Overflow__c_src_wchar_t_cat_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[50] = VAR6"";
 wcscat(VAR5, VAR3);
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
