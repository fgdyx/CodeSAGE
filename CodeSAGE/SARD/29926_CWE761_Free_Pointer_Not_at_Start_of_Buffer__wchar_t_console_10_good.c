#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 {
 size_t VAR4 = wcslen(VAR2);
 if (100-VAR4 > 1)
 {
 if (FUN2(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = wcslen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == VAR3'')
 {
 VAR2[VAR4-1] = VAR3'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR4] = VAR3'';
 }
 }
 }
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 {
 size_t VAR6;
 for (VAR6=0; VAR6 < wcslen(VAR2); VAR6++)
 {
 if (VAR2[VAR6] == VAR7)
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
 if (100-VAR4 > 1)
 {
 if (FUN2(VAR2+VAR4, (int)(100-VAR4), stdin) != NULL)
 {
 VAR4 = wcslen(VAR2);
 if (VAR4 > 0 && VAR2[VAR4-1] == VAR3'')
 {
 VAR2[VAR4-1] = VAR3'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR4] = VAR3'';
 }
 }
 }
 if(VAR8)
 {
 {
 size_t VAR6;
 for (VAR6=0; VAR6 < wcslen(VAR2); VAR6++)
 {
 if (VAR2[VAR6] == VAR7)
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
