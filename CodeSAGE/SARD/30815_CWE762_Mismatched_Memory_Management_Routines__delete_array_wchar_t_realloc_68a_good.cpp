#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 VAR2 = (wchar_t *)realloc(VAR2, 100*sizeof(wchar_t));
 VAR4 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
