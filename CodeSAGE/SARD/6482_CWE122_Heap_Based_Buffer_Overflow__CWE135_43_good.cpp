#ifndef VAR1
static void FUN1(void * &VAR2)
{
 {
 char * VAR3 = (char *)malloc(50*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 VAR2 = (void *)VAR3;
 }
}
static void FUN2()
{
 void * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 size_t VAR4 = strlen((char *)VAR2);
 void * VAR5 = (void *)calloc(VAR4+1, 1);
 memcpy(VAR5, VAR2, (VAR4+1));
 FUN3((char *)VAR5);
 free(VAR5);
 }
}
static void FUN4(void * &VAR2)
{
 {
 wchar_t * VAR6 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR6, VAR7'', 50-1);
 VAR6[50-1] = VAR7'';
 VAR2 = (void *)VAR6;
 }
}
static void FUN5()
{
 void * VAR2;
 VAR2 = NULL;
 FUN4(VAR2);
 {
 size_t VAR4 = wcslen((wchar_t *)VAR2);
 void * VAR5 = (void *)calloc(VAR4+1, sizeof(wchar_t));
 memcpy(VAR5, VAR2, (VAR4+1)*sizeof(wchar_t));
 FUN6((wchar_t *)VAR5);
 free(VAR5);
 }
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
