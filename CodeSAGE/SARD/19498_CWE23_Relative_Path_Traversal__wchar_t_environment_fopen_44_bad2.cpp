#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 VAR3 *VAR4 = NULL;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4 = FUN2(VAR2, VAR5"");
 if (VAR4 != NULL)
 {
 fclose(VAR4);
 }
 }
}
void FUN3()
{
 wchar_t * VAR2;
 void (*VAR6) (wchar_t *) = VAR7;
 wchar_t VAR8[VAR9] = VAR10;
 VAR2 = VAR8;
 {
 size_t VAR11 = wcslen(VAR2);
 wchar_t * VAR12 = FUN4(VAR13);
 if (VAR12 != NULL)
 {
 /* POTENTIAL FLAW: Read data from an environment variable */
 wcsncat(VAR2+VAR11, VAR12, VAR9-VAR11-1);
 }
 }
 FUN5(VAR2);
}
#endif
