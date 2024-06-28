#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 void * VAR2;
 void (*VAR3) (void *) = VAR4;
 VAR2 = NULL;
 {
 char * VAR5 = (char *)malloc(50*sizeof(char));
 memset(VAR5, '', 50-1);
 VAR5[50-1] = '';
 VAR2 = (void *)VAR5;
 }
 FUN3(VAR2);
}
void FUN4(void * VAR2);
static void FUN5()
{
 void * VAR2;
 void (*VAR3) (void *) = VAR6;
 VAR2 = NULL;
 {
 wchar_t * VAR7 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR7, VAR8'', 50-1);
 VAR7[50-1] = VAR8'';
 VAR2 = (void *)VAR7;
 }
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
