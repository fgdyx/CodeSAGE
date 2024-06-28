#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 wchar_t VAR5[50] = VAR6"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR4);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR5[VAR7] = VAR4[VAR7];
 }
 VAR5[50-1] = VAR6'';
 FUN3(VAR4);
 free(VAR4);
 }
}
wchar_t * FUN4(wchar_t * VAR4);
static void FUN5()
{
 wchar_t * VAR4;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3 = 1;
 VAR4 = FUN4(VAR4);
 {
 wchar_t VAR5[50] = VAR6"";
 size_t VAR7, VAR8;
 VAR8 = wcslen(VAR4);
 for (VAR7 = 0; VAR7 < VAR8; VAR7++)
 {
 VAR5[VAR7] = VAR4[VAR7];
 }
 VAR5[50-1] = VAR6'';
 FUN3(VAR4);
 free(VAR4);
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
