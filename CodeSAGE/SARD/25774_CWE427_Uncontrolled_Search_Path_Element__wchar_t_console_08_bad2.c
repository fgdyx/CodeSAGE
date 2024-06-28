#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 {
 size_t VAR5 = wcslen(VAR2);
 if (250-VAR5 > 1)
 {
 /* POTENTIAL FLAW: Read data from the console */
 if (FUN3(VAR2+VAR5, (int)(250-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN4("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 }
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN5(VAR2);
}
#endif
