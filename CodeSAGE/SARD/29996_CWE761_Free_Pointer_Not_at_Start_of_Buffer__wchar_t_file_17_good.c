#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 {
 size_t VAR5 = wcslen(VAR3);
 VAR6 * VAR7;
 if (100-VAR5 > 1)
 {
 VAR7 = fopen(VAR8, "");
 if (VAR7 != NULL)
 {
 if (FUN2(VAR3+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN3("");
 VAR3[VAR5] = VAR4'';
 }
 fclose(VAR7);
 }
 }
 }
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR9;
 for (VAR9=0; VAR9 < wcslen(VAR3); VAR9++)
 {
 if (VAR3[VAR9] == VAR10)
 {
 FUN3("");
 break;
 }
 }
 free(VAR3);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
