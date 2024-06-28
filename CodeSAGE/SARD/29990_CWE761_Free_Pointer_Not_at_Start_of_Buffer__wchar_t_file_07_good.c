#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 VAR5 * VAR6;
 if (100-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 if (FUN2(VAR2+VAR4, (int)(100-VAR4), VAR6) == NULL)
 {
 FUN3("");
 VAR2[VAR4] = VAR3'';
 }
 fclose(VAR6);
 }
 }
 }
 if(VAR8!=5)
 {
 FUN3("");
 }
 else
 {
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
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 VAR5 * VAR6;
 if (100-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 if (FUN2(VAR2+VAR4, (int)(100-VAR4), VAR6) == NULL)
 {
 FUN3("");
 VAR2[VAR4] = VAR3'';
 }
 fclose(VAR6);
 }
 }
 }
 if(VAR8==5)
 {
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
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
