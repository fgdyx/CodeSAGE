#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_environment_34_unionType VAR3;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR4'';
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 VAR3.VAR8 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR9;
 {
 size_t VAR10;
 for (VAR10=0; VAR10 < wcslen(VAR2); VAR10++)
 {
 if (VAR2[VAR10] == VAR11)
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
