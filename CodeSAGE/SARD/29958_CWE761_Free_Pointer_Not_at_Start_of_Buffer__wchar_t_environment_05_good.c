#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 wchar_t * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 wcsncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 if(VAR7)
 {
 FUN3("");
 }
 else
 {
 {
 size_t VAR8;
 for (VAR8=0; VAR8 < wcslen(VAR2); VAR8++)
 {
 if (VAR2[VAR8] == VAR9)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 wchar_t * VAR5 = FUN2(VAR6);
 if (VAR5 != NULL)
 {
 wcsncat(VAR2+VAR4, VAR5, 100-VAR4-1);
 }
 }
 if(VAR10)
 {
 {
 size_t VAR8;
 for (VAR8=0; VAR8 < wcslen(VAR2); VAR8++)
 {
 if (VAR2[VAR8] == VAR9)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
