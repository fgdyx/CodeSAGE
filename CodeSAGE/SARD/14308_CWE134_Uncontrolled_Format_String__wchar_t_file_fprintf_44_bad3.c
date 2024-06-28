#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 fwprintf(VAR3, VAR2);
}
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR4) (wchar_t *) = VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 {
 size_t VAR8 = wcslen(VAR2);
 VAR9 * VAR10;
 if (100-VAR8 > 1)
 {
 VAR10 = fopen(VAR11, "");
 if (VAR10 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN3(VAR2+VAR8, (int)(100-VAR8), VAR10) == NULL)
 {
 FUN4("");
 VAR2[VAR8] = VAR7'';
 }
 fclose(VAR10);
 }
 }
 }
 FUN5(VAR2);
}
#endif
