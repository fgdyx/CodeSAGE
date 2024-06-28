#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN2(VAR2);
}
void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR4[250] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR6 = wcslen(VAR2);
 if (250-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN4(VAR2+VAR6, (int)(250-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR5'')
 {
 VAR2[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN5("");
 VAR2[VAR6] = VAR5'';
 }
 }
 }
 VAR3 = VAR2;
 FUN1();
}
#endif
