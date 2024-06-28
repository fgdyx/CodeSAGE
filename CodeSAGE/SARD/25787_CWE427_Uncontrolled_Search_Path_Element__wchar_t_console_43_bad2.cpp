#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 if (250-VAR3 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR3, (int)(250-VAR3), stdin) != NULL)
 {
 VAR3 = wcslen(VAR2);
 if (VAR3 > 0 && VAR2[VAR3-1] == VAR4'')
 {
 VAR2[VAR3-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR3] = VAR4'';
 }
 }
 }
}
void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR5[250] = VAR4"";
 VAR2 = VAR5;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN5(VAR2);
}
#endif
