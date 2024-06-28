#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 FUN1(VAR2);
 {
 size_t VAR4;
 for (VAR4=0; VAR4 < wcslen(VAR2); VAR4++)
 {
 if (VAR2[VAR4] == VAR5)
 {
 FUN3("");
 break;
 }
 }
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
