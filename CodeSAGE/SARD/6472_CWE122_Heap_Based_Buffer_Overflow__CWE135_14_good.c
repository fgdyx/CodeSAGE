#ifndef VAR1
static void FUN1()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 VAR2 = (void *)VAR4;
 }
 }
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 size_t VAR6 = wcslen((wchar_t *)VAR2);
 void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
 memcpy(VAR7, VAR2, (VAR6+1)*sizeof(wchar_t));
 FUN3((wchar_t *)VAR7);
 free(VAR7);
 }
 }
}
static void FUN4()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 VAR2 = (void *)VAR4;
 }
 }
 if(VAR3==5)
 {
 {
 size_t VAR6 = wcslen((wchar_t *)VAR2);
 void * VAR7 = (void *)calloc(VAR6+1, sizeof(wchar_t));
 memcpy(VAR7, VAR2, (VAR6+1)*sizeof(wchar_t));
 FUN3((wchar_t *)VAR7);
 free(VAR7);
 }
 }
}
static void FUN5()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR8 = (char *)malloc(50*sizeof(char));
 memset(VAR8, '', 50-1);
 VAR8[50-1] = '';
 VAR2 = (void *)VAR8;
 }
 }
 if(VAR3==5)
 {
 {
 size_t VAR6 = strlen((char *)VAR2);
 void * VAR7 = (void *)calloc(VAR6+1, 1);
 memcpy(VAR7, VAR2, (VAR6+1));
 FUN2((char *)VAR7);
 free(VAR7);
 }
 }
}
static void FUN6()
{
 void * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 char * VAR8 = (char *)malloc(50*sizeof(char));
 memset(VAR8, '', 50-1);
 VAR8[50-1] = '';
 VAR2 = (void *)VAR8;
 }
 }
 if(VAR3==5)
 {
 {
 size_t VAR6 = strlen((char *)VAR2);
 void * VAR7 = (void *)calloc(VAR6+1, 1);
 memcpy(VAR7, VAR2, (VAR6+1));
 FUN2((char *)VAR7);
 free(VAR7);
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
