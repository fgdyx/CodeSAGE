#ifndef VAR1
void FUN1(void * * VAR2)
{
 void * VAR3 = *VAR2;
 {
 size_t VAR4 = strlen((char *)VAR3);
 void * VAR5 = (void *)calloc(VAR4+1, 1);
 memcpy(VAR5, VAR3, (VAR4+1));
 FUN2((char *)VAR5);
 free(VAR5);
 }
}
void FUN3(void * * VAR2)
{
 void * VAR3 = *VAR2;
 {
 size_t VAR4 = wcslen((wchar_t *)VAR3);
 void * VAR5 = (void *)calloc(VAR4+1, sizeof(wchar_t));
 memcpy(VAR5, VAR3, (VAR4+1)*sizeof(wchar_t));
 FUN4((wchar_t *)VAR5);
 free(VAR5);
 }
}
#endif
