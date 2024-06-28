#ifndef VAR1
static void FUN1()
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
 VAR4 = (void *)VAR5;
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 size_t VAR7 = wcslen((wchar_t *)VAR4);
 void * VAR8 = (void *)calloc(VAR7+1, sizeof(wchar_t));
 memcpy(VAR8, VAR4, (VAR7+1)*sizeof(wchar_t));
 FUN2((wchar_t *)VAR8);
 free(VAR8);
 }
 }
}
static void FUN3()
{
 int VAR9,VAR10;
 void * VAR4;
 VAR4 = NULL;
 for(VAR9 = 0; VAR9 < 1; VAR9++)
 {
 {
 char * VAR11 = (char *)malloc(50*sizeof(char));
 memset(VAR11, '', 50-1);
 VAR11[50-1] = '';
 VAR4 = (void *)VAR11;
 }
 }
 for(VAR10 = 0; VAR10 < 1; VAR10++)
 {
 {
 size_t VAR7 = strlen((char *)VAR4);
 void * VAR8 = (void *)calloc(VAR7+1, 1);
 memcpy(VAR8, VAR4, (VAR7+1));
 FUN4((char *)VAR8);
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
