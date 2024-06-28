#ifndef VAR1
void FUN1(CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE761_Free_Pointer_Not_at_Start_of_Buffer__wchar_t_console_67_structType VAR2;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 {
 size_t VAR5 = wcslen(VAR3);
 if (100-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR3+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR3);
 if (VAR5 > 0 && VAR3[VAR5-1] == VAR4'')
 {
 VAR3[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN4("");
 VAR3[VAR5] = VAR4'';
 }
 }
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
