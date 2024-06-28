#ifndef VAR1
void FUN1(void * VAR2)
{
 {
 size_t VAR3 = strlen((char *)VAR2);
 void * VAR4 = (void *)calloc(VAR3+1, 1);
 memcpy(VAR4, VAR2, (VAR3+1));
 FUN2((char *)VAR4);
 free(VAR4);
 }
}
void FUN3(void * VAR2)
{
 {
 size_t VAR3 = wcslen((wchar_t *)VAR2);
 void * VAR4 = (void *)calloc(VAR3+1, sizeof(wchar_t));
 memcpy(VAR4, VAR2, (VAR3+1)*sizeof(wchar_t));
 FUN4((wchar_t *)VAR4);
 free(VAR4);
 }
}
#endif
