#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 void * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = (char *)malloc(50*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 VAR2 = (void *)VAR3;
 }
 FUN1(VAR2);
}
void FUN3(void * VAR2);
static void FUN4()
{
 void * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR4 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR4, VAR5'', 50-1);
 VAR4[50-1] = VAR5'';
 VAR2 = (void *)VAR4;
 }
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
