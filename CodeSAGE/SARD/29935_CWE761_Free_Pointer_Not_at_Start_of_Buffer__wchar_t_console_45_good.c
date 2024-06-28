#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 size_t VAR4;
 for (VAR4=0; VAR4 < wcslen(VAR2); VAR4++)
 {
 if (VAR2[VAR4] == VAR5)
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
 VAR2[0] = VAR6'';
 {
 size_t VAR7 = wcslen(VAR2);
 if (100-VAR7 > 1)
 {
 if (FUN4(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR6'')
 {
 VAR2[VAR7-1] = VAR6'';
 }
 }
 else
 {
 FUN2("");
 VAR2[VAR7] = VAR6'';
 }
 }
 }
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
