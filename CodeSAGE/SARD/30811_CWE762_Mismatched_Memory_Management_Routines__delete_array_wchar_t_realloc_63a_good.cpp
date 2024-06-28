#ifndef VAR1
void FUN1(wchar_t * * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 FUN1(&VAR2);
}
void FUN3(wchar_t * * VAR2);
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = NULL;
 VAR2 = (wchar_t *)realloc(VAR2, 100*sizeof(wchar_t));
 FUN3(&VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
