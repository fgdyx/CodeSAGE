#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR4[50] = VAR3"";
 memmove(VAR4, VAR2, wcslen(VAR2)*sizeof(wchar_t));
 VAR4[50-1] = VAR3'';
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
