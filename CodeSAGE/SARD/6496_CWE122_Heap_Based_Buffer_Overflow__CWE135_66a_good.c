#ifndef VAR1
void FUN1(void * VAR2[]);
static void FUN2()
{
 void * VAR3;
 void * VAR2[5];
 VAR3 = NULL;
 {
 char * VAR4 = (char *)malloc(50*sizeof(char));
 memset(VAR4, '', 50-1);
 VAR4[50-1] = '';
 VAR3 = (void *)VAR4;
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(void * VAR2[]);
static void FUN4()
{
 void * VAR3;
 void * VAR2[5];
 VAR3 = NULL;
 {
 wchar_t * VAR5 = (wchar_t *)malloc(50*sizeof(wchar_t));
 wmemset(VAR5, VAR6'', 50-1);
 VAR5[50-1] = VAR6'';
 VAR3 = (void *)VAR5;
 }
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
