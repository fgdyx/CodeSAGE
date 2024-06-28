#ifndef VAR1
static void FUN1()
{
 void * VAR2;
 void * &VAR3 = VAR2;
 VAR2 = NULL;
 {
 char * VAR4 = (char *)malloc(50*sizeof(char));
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 VAR2 = (void *)VAR4;
 }
 {
 void * VAR2 = VAR3;
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
 void * &VAR3 = VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR7 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR7, VAR8'', 50-1);
 VAR7[50-1] = VAR8'';
 VAR2 = (void *)VAR7;
 }
 {
 void * VAR2 = VAR3;
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
