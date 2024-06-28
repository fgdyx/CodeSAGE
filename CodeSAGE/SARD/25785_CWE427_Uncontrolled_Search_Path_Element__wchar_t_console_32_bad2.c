#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[250] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 {
 size_t VAR7 = wcslen(VAR2);
 if (250-VAR7 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR7, (int)(250-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR6'')
 {
 VAR2[VAR7-1] = VAR6'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR7] = VAR6'';
 }
 }
 }
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN4(VAR2);
 }
}
#endif
