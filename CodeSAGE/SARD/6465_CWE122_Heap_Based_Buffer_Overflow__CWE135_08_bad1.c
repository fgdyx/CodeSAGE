#ifndef VAR1
void FUN1()
{
 void * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR2 = (void *)VAR3;
 }
 }
 if(FUN2())
 {
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR5 = strlen((char *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, 1);
 memcpy(VAR6, VAR2, (VAR5+1));
 FUN3((char *)VAR6);
 free(VAR6);
 }
 }
}
#endif
