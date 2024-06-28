#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 else
 {
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 {
 wchar_t VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
