#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 VAR4 * VAR5;
 if (250-VAR3 > 1)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR2+VAR3, (int)(250-VAR3), VAR5) == NULL)
 {
 FUN3("");
 VAR2[VAR3] = VAR7'';
 }
 fclose(VAR5);
 }
 }
 }
}
void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR8[250] = VAR7"";
 VAR2 = VAR8;
 FUN1(VAR2);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN5(VAR2);
}
#endif
