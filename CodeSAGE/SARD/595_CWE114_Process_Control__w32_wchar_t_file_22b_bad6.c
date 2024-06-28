#ifndef VAR1
extern int VAR2;
wchar_t * FUN1(wchar_t * VAR3)
{
 if(VAR2)
 {
 {
 size_t VAR4 = wcslen(VAR3);
 VAR5 * VAR6;
 if (100-VAR4 > 1)
 {
 VAR6 = fopen(VAR7, "");
 if (VAR6 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN2(VAR3+VAR4, (int)(100-VAR4), VAR6) == NULL)
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
#endif
