#ifndef VAR1
void FUN1(wchar_t * &VAR2)
{
 {
 size_t VAR3 = wcslen(VAR2);
 VAR4 * VAR5;
 if (100-VAR3 > 1)
 {
 VAR5 = fopen(VAR6, "");
 if (VAR5 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR2+VAR3, (int)(100-VAR3), VAR5) == NULL)
 {
 FUN3("");
 VAR2[VAR3] = VAR7'';
 }
 fclose(VAR5);
 }
 }
 }
}
#endif
