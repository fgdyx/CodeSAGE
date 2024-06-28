#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 {
 wchar_t VAR3[10+1] = VAR4;
 memmove(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
