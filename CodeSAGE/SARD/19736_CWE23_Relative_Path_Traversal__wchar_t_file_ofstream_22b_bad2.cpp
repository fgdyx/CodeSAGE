#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = wcslen(VAR3);
 VAR5 * VAR6;
 if (VAR7-VAR4 > 1)
 {
 VAR6 = fopen(VAR8, "");
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR3+VAR4, (int)(VAR7-VAR4), VAR6) == NULL)
 {
 FUN3("");
 VAR3[VAR4] = VAR9'';
 }
 fclose(VAR6);
 }
 }
 }
 }
 return VAR3;
}
#endif
