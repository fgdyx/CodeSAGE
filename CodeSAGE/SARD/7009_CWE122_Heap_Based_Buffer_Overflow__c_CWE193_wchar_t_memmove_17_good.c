#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 memmove(VAR3, VAR4, (wcslen(VAR4) + 1) * sizeof(wchar_t));
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
