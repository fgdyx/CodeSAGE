#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[10+1] = VAR5;
 wcsncpy(VAR2, VAR4, wcslen(VAR4) + 1);
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
