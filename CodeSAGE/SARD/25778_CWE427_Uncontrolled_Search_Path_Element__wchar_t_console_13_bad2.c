#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 if (250-VAR6 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN2(VAR2+VAR6, (int)(250-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR4'')
 {
 VAR2[VAR6-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = VAR4'';
 }
 }
 }
 }
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN4(VAR2);
}
#endif
