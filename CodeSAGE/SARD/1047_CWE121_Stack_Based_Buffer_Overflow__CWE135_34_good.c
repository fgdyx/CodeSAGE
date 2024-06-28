#ifndef VAR1
static void FUN1()
{
 void * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (void *)VAR4;
 VAR3.VAR5 = VAR2;
 {
 void * VAR2 = VAR3.VAR6;
 {
 size_t VAR7 = strlen((char *)VAR2);
 void * VAR8 = (void *)calloc(VAR7+1, 1);
 memcpy(VAR8, VAR2, (VAR7+1));
 FUN2((char *)VAR8);
 free(VAR8);
 }
 }
}
static void FUN3()
{
 void * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE135_34_unionType VAR3;
 VAR2 = NULL;
 VAR2 = (void *)VAR9;
 VAR3.VAR5 = VAR2;
 {
 void * VAR2 = VAR3.VAR6;
 {
 size_t VAR7 = wcslen((wchar_t *)VAR2);
 void * VAR8 = (void *)calloc(VAR7+1, sizeof(wchar_t));
 memcpy(VAR8, VAR2, (VAR7+1)*sizeof(wchar_t));
 FUN4((wchar_t *)VAR8);
 free(VAR8);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
