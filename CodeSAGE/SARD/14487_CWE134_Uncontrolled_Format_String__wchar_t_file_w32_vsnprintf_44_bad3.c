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
 void (*VAR6) (wchar_t *, ...) = VAR7;
 wchar_t VAR8[100] = VAR4"";
 VAR2 = VAR8;
 {
 size_t VAR9 = wcslen(VAR2);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR12, "");
 if (VAR11 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN6(VAR2+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN7("");
 VAR2[VAR9] = VAR4'';
 }
 fclose(VAR11);
 }
 }
 }
 FUN8(VAR2, VAR2);
}
#endif
