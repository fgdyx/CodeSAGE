#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 FUN3(VAR2);
}
static void FUN4(wchar_t * &VAR2)
{
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 free(VAR2);
}
static void FUN5()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN4(VAR2);
 ;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
