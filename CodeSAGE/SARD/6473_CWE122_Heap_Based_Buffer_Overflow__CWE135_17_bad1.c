#ifndef VAR1
void FUN1()
{
 int VAR2,VAR3;
 void * VAR4;
 VAR4 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 wchar_t * VAR5 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR5, VAR6'', 50-1);
 VAR5[50-1] = VAR6'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR4 = (void *)VAR5;
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR7 = strlen((char *)VAR4);
 void * VAR8 = (void *)calloc(VAR7+1, 1);
 memcpy(VAR8, VAR4, (VAR7+1));
 FUN2((char *)VAR8);
 free(VAR8);
 }
 }
}
#endif
