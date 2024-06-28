#ifndef VAR1
static void FUN1()
{
 void * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 VAR2 = (void *)VAR3;
 }
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 size_t VAR5 = wcslen((wchar_t *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
 memcpy(VAR6, VAR2, (VAR5+1)*sizeof(wchar_t));
 FUN5((wchar_t *)VAR6);
 free(VAR6);
 }
 }
}
static void FUN6()
{
 void * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 wchar_t * VAR3 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 VAR2 = (void *)VAR3;
 }
 }
 if(FUN2())
 {
 {
 size_t VAR5 = wcslen((wchar_t *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, sizeof(wchar_t));
 memcpy(VAR6, VAR2, (VAR5+1)*sizeof(wchar_t));
 FUN5((wchar_t *)VAR6);
 free(VAR6);
 }
 }
}
static void FUN7()
{
 void * VAR2;
 VAR2 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 char * VAR7 = (char *)malloc(50*sizeof(char));
 memset(VAR7, '', 50-1);
 VAR7[50-1] = '';
 VAR2 = (void *)VAR7;
 }
 }
 if(FUN2())
 {
 {
 size_t VAR5 = strlen((char *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, 1);
 memcpy(VAR6, VAR2, (VAR5+1));
 FUN4((char *)VAR6);
 free(VAR6);
 }
 }
}
static void FUN8()
{
 void * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char * VAR7 = (char *)malloc(50*sizeof(char));
 memset(VAR7, '', 50-1);
 VAR7[50-1] = '';
 VAR2 = (void *)VAR7;
 }
 }
 if(FUN2())
 {
 {
 size_t VAR5 = strlen((char *)VAR2);
 void * VAR6 = (void *)calloc(VAR5+1, 1);
 memcpy(VAR6, VAR2, (VAR5+1));
 FUN4((char *)VAR6);
 free(VAR6);
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
