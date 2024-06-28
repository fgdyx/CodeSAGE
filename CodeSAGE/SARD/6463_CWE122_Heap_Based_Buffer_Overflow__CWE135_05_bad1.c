#ifndef VAR1
void FUN1()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR4;
 }
 }
 if(VAR3)
 {
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR6 = strlen((char *)VAR2);
 void * VAR7 = (void *)calloc(VAR6+1, 1);
 memcpy(VAR7, VAR2, (VAR6+1));
 FUN2((char *)VAR7);
 free(VAR7);
 }
 }
}
#endif
