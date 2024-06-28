#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
void FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR4[0] = VAR5'';
 {
 size_t VAR6 = wcslen(VAR4);
 wchar_t * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR4+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR2 = 0;
 FUN1(VAR4);
}
void FUN4(wchar_t * VAR4);
static void FUN5()
{
 wchar_t * VAR4;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR4[0] = VAR5'';
 {
 size_t VAR6 = wcslen(VAR4);
 wchar_t * VAR7 = FUN3(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR4+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR3 = 1;
 FUN4(VAR4);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
