#ifndef VAR1
static void FUN1()
{
 void * VAR2;
 VAR2 = NULL;
 VAR2 = (void *)VAR3;
 {
 void * VAR4 = VAR2;
 void * VAR2 = VAR4;
 {
 size_t VAR5 = strlen((char *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, 1);
 memcpy(VAR6, VAR2, (VAR5+1));
 FUN2((char *)VAR6);
 free(VAR6);
 }
 }
}
static void FUN3()
{
 void * VAR2;
 VAR2 = NULL;
 VAR2 = (void *)VAR7;
 {
 void * VAR4 = VAR2;
 void * VAR2 = VAR4;
 {
 size_t VAR5 = wcslen((wchar_t *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
 memcpy(VAR6, VAR2, (VAR5+1)*sizeof(wchar_t));
 FUN4((wchar_t *)VAR6);
 free(VAR6);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
