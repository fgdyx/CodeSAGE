#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR4'';
 {
 size_t VAR5 = wcslen(VAR2);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (FUN2(VAR2+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN3("");
 VAR2[VAR5] = VAR4'';
 }
 fclose(VAR7);
 }
 }
 }
 {
 wchar_t * VAR2 = VAR3;
 {
 size_t VAR9;
 for (VAR9=0; VAR9 < wcslen(VAR2); VAR9++)
 {
 if (VAR2[VAR9] == VAR10)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
