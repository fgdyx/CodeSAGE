#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(void * VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 size_t VAR6 = wcslen((wchar_t *)VAR5);
 void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
 memcpy(VAR7, VAR5, (VAR6+1)*sizeof(wchar_t));
 FUN3((wchar_t *)VAR7);
 free(VAR7);
 }
 }
}
static void FUN4()
{
 void * VAR5;
 VAR5 = NULL;
 {
 wchar_t * VAR8 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR8, VAR9'', 50-1);
 VAR8[50-1] = VAR9'';
 VAR5 = (void *)VAR8;
 }
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN5(void * VAR5)
{
 if(VAR3)
 {
 {
 size_t VAR6 = wcslen((wchar_t *)VAR5);
 void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
 memcpy(VAR7, VAR5, (VAR6+1)*sizeof(wchar_t));
 FUN3((wchar_t *)VAR7);
 free(VAR7);
 }
 }
}
static void FUN6()
{
 void * VAR5;
 VAR5 = NULL;
 {
 wchar_t * VAR8 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR8, VAR9'', 50-1);
 VAR8[50-1] = VAR9'';
 VAR5 = (void *)VAR8;
 }
 VAR3 = 1;
 FUN5(VAR5);
}
static void FUN7(void * VAR5)
{
 if(VAR4)
 {
 {
 size_t VAR6 = strlen((char *)VAR5);
 void * VAR7 = (void *)calloc(VAR6+1, 1);
 memcpy(VAR7, VAR5, (VAR6+1));
 FUN2((char *)VAR7);
 free(VAR7);
 }
 }
}
static void FUN8()
{
 void * VAR5;
 VAR5 = NULL;
 {
 char * VAR10 = (char *)malloc(50*sizeof(char));
 memset(VAR10, '', 50-1);
 VAR10[50-1] = '';
 VAR5 = (void *)VAR10;
 }
 VAR4 = 1;
 FUN7(VAR5);
}
void FUN9()
{
 FUN4();
 FUN6();
 FUN8();
}
#endif
