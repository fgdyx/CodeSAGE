#ifndef VAR1
void FUN1(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_67_structType VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_file_67_structType VAR2;
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
 if (FUN3(VAR3+VAR5, (int)(100-VAR5), VAR7) == NULL)
 {
 FUN4("");
 VAR3[VAR5] = VAR4'';
 }
 fclose(VAR7);
 }
 }
 }
 VAR2.VAR9 = VAR3;
 FUN1(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
