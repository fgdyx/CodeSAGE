#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 wchar_t * VAR4 = FUN2(VAR5);
 if (VAR4 != NULL)
 {
 wcsncat(VAR2+VAR3, VAR4, 100-VAR3-1);
 }
 }
 return VAR2;
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR6'';
 VAR2 = FUN1(VAR2);
 {
 size_t VAR7;
 for (VAR7=0; VAR7 < wcslen(VAR2); VAR7++)
 {
 if (VAR2[VAR7] == VAR8)
 {
 FUN4("");
 break;
 }
 }
 free(VAR2);
 }
}
void FUN5()
{
 FUN3();
}
#endif
