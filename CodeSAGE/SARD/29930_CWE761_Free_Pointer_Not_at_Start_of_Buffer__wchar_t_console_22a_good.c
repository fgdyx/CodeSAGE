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
 if (100-VAR6 > 1)
 {
 if (FUN3(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR4);
 if (VAR6 > 0 && VAR4[VAR6-1] == VAR5'')
 {
 VAR4[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN4("");
 VAR4[VAR6] = VAR5'';
 }
 }
 }
 VAR2 = 0;
 FUN1(VAR4);
}
void FUN5(wchar_t * VAR4);
static void FUN6()
{
 wchar_t * VAR4;
 VAR4 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR4[0] = VAR5'';
 {
 size_t VAR6 = wcslen(VAR4);
 if (100-VAR6 > 1)
 {
 if (FUN3(VAR4+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR4);
 if (VAR6 > 0 && VAR4[VAR6-1] == VAR5'')
 {
 VAR4[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN4("");
 VAR4[VAR6] = VAR5'';
 }
 }
 }
 VAR3 = 1;
 FUN5(VAR4);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
