#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3;
 for (VAR3=0; VAR3 < wcslen(VAR2); VAR3++)
 {
 if (VAR2[VAR3] == VAR4)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR5'';
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN4(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
