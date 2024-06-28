#ifndef VAR1
static void FUN1()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 VAR2 = (void *)VAR4;
 }
 }
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 {
 size_t VAR7 = wcslen((wchar_t *)VAR2);
 void * VAR8 = (void *)calloc(VAR7+1, sizeof(wchar_t));
 memcpy(VAR8, VAR2, (VAR7+1)*sizeof(wchar_t));
 FUN3((wchar_t *)VAR8);
 free(VAR8);
 }
 }
}
static void FUN4()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 VAR2 = (void *)VAR4;
 }
 }
 if(VAR3)
 {
 {
 size_t VAR7 = wcslen((wchar_t *)VAR2);
 void * VAR8 = (void *)calloc(VAR7+1, sizeof(wchar_t));
 memcpy(VAR8, VAR2, (VAR7+1)*sizeof(wchar_t));
 FUN3((wchar_t *)VAR8);
 free(VAR8);
 }
 }
}
static void FUN5()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR6)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR9 = (char *)malloc(50*sizeof(char));
 memset(VAR9, '', 50-1);
 VAR9[50-1] = '';
 VAR2 = (void *)VAR9;
 }
 }
 if(VAR3)
 {
 {
 size_t VAR7 = strlen((char *)VAR2);
 void * VAR8 = (void *)calloc(VAR7+1, 1);
 memcpy(VAR8, VAR2, (VAR7+1));
 FUN2((char *)VAR8);
 free(VAR8);
 }
 }
}
static void FUN6()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 char * VAR9 = (char *)malloc(50*sizeof(char));
 memset(VAR9, '', 50-1);
 VAR9[50-1] = '';
 VAR2 = (void *)VAR9;
 }
 }
 if(VAR3)
 {
 {
 size_t VAR7 = strlen((char *)VAR2);
 void * VAR8 = (void *)calloc(VAR7+1, 1);
 memcpy(VAR8, VAR2, (VAR7+1));
 FUN2((char *)VAR8);
 free(VAR8);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
