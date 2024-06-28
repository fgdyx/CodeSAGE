#ifndef VAR1
static void FUN1(wchar_t * VAR2, ...)
{
 {
 va_list VAR3;
 FUN2(VAR3, VAR2);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN3(VAR2, VAR3);
 FUN4(VAR3);
 }
}
void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 if(VAR6)
 {
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
 VAR2[VAR7] = VAR5'';
 }
 fclose(VAR9);
 }
 }
 }
 }
 if(VAR6)
 {
 FUN1(VAR2, VAR2);
 }
}
#endif
