#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[10+1] = VAR4;
 memcpy(VAR2, VAR3, (wcslen(VAR3) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 free(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR6;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
