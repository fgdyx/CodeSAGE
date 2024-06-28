#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 if (100-VAR3 > 1)
 {
 if (FUN2(VAR2+VAR3, (int)(100-VAR3), stdin) != NULL)
 {
 VAR3 = wcslen(VAR2);
 if (VAR3 > 0 && VAR2[VAR3-1] == VAR4'')
 {
 VAR2[VAR3-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR3] = VAR4'';
 }
 }
 }
 return VAR2;
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR4'';
 VAR2 = FUN1(VAR2);
 {
 size_t VAR5;
 for (VAR5=0; VAR5 < wcslen(VAR2); VAR5++)
 {
 if (VAR2[VAR5] == VAR6)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
}
void FUN5()
{
 FUN4();
}
#endif
