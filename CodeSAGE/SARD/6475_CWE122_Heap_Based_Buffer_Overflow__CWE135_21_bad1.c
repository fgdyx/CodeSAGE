#ifndef VAR1
static int VAR2 = 0;
static void FUN1(void * VAR3)
{
 if(VAR2)
 {
 {
 /* POTENTIAL FLAW: treating pointer as a char* when it may point to a wide string */
 size_t VAR4 = strlen((char *)VAR3);
 void * VAR5 = (void *)calloc(VAR4+1, 1);
 memcpy(VAR5, VAR3, (VAR4+1));
 FUN2((char *)VAR5);
 free(VAR5);
 }
 }
}
void FUN3()
{
 void * VAR3;
 VAR3 = NULL;
 {
 wchar_t * VAR6 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR6, VAR7'', 50-1);
 VAR6[50-1] = VAR7'';
 /* POTENTIAL FLAW: Set data to point to a wide string */
 VAR3 = (void *)VAR6;
 }
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
