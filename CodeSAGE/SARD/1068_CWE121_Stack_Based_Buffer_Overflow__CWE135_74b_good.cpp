#ifndef VAR1
void FUN1(VAR2<int, void *> VAR3)
{
 void * VAR4 = VAR3[2];
 {
 size_t VAR5 = strlen((char *)VAR4);
 void * VAR6 = (void *)calloc(VAR5+1, 1);
 memcpy(VAR6, VAR4, (VAR5+1));
 FUN2((char *)VAR6);
 free(VAR6);
 }
}
void FUN3(VAR2<int, void *> VAR3)
{
 void * VAR4 = VAR3[2];
 {
 size_t VAR5 = wcslen((wchar_t *)VAR4);
 void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
 memcpy(VAR6, VAR4, (VAR5+1)*sizeof(wchar_t));
 FUN4((wchar_t *)VAR6);
 free(VAR6);
 }
}
#endif
