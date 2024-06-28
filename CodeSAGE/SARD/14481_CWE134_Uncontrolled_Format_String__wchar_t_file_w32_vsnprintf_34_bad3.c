#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 wchar_t VAR3[100] = VAR4"";
 va_list VAR5;
 FUN2(VAR5, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 _vsnwprintf(VAR3, 100-1, VAR2, VAR5);
 FUN3(VAR5);
 FUN4(VAR3);
 }
}
void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR6[100] = VAR4"";
 VAR2 = VAR6;
 {
 size_t VAR7 = wcslen(VAR2);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN6(VAR2+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN7("");
 VAR2[VAR7] = VAR4'';
 }
 fclose(VAR9);
 }
 }
 }
 {
 wchar_t * VAR11 = VAR2;
 wchar_t * VAR2 = VAR11;
 FUN1(VAR2, VAR2);
 }
}
#endif
