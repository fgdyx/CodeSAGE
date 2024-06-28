#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 void * VAR2;
 VAR2 = NULL;
 {
 char * VAR3 = (char *)malloc(50*sizeof(char));
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 VAR2 = (void *)VAR3;
 }
 VAR4 = VAR2;
 FUN1();
}
static void FUN4()
{
 void * VAR2;
 VAR2 = NULL;
 {
 wchar_t * VAR5 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR5, VAR6'', 50-1);
 VAR5[50-1] = VAR6'';
 VAR2 = (void *)VAR5;
 }
 VAR7 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
