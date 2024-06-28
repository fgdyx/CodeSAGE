#ifndef VAR1
void FUN1()
{
 void * VAR2;
 CWE122_Heap_Based_Buffer_Overflow__CWE135_34_unionType VAR3;
 VAR2 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR4;
 }
 VAR3.VAR6 = VAR2;
 {
 void * VAR2 = VAR3.VAR7;
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR8 = strlen((char *)VAR2);
 void * VAR9 = (void *)calloc(VAR8+1, 1);
 memcpy(VAR9, VAR2, (VAR8+1));
 FUN2((char *)VAR9);
 free(VAR9);
 }
 }
}
#endif
