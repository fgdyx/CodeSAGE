#ifndef VAR1
static int VAR2 = 0;
static wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = wcslen(VAR3);
 VAR5 * VAR6;
 if (250-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR3+VAR4, (int)(250-VAR4), VAR6) == NULL)
 {
 FUN3("");
 VAR3[VAR4] = VAR8'';
 }
 fclose(VAR6);
 }
 }
 }
 }
 return VAR3;
}
void FUN4()
{
 wchar_t * VAR3;
 wchar_t VAR9[250] = VAR8"";
 VAR3 = VAR9;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 /* POTENTIAL FLAW: Set a new environment variable with a path that is possibly insecure */
 FUN5(VAR3);
}
#endif
