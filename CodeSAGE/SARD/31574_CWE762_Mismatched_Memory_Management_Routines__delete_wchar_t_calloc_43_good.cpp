#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 VAR2 = new wchar_t;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 delete VAR2;
}
static void FUN3(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN3(VAR2);
 free(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
