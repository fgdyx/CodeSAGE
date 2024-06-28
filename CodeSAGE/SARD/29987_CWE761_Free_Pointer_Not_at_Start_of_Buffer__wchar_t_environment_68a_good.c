#ifndef VAR1
void FUN1();
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 wchar_t * VAR5 = FUN3(VAR6);
 if (VAR5 != NULL)
 {
 wcsncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 VAR7 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN2();
}
#endif
