#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 {
 size_t VAR6 = wcslen(VAR3);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN3(VAR3+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN4("");
 VAR3[VAR6] = VAR5'';
 }
 fclose(VAR8);
 }
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
