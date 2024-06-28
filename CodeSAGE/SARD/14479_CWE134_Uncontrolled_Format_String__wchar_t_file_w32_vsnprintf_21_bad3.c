#ifndef VAR1
static int VAR2 = 0;
static void FUN1(wchar_t * VAR3, ...)
{
 if(VAR2)
 {
 {
 wchar_t VAR4[100] = VAR5"";
 va_list VAR6;
 FUN2(VAR6, VAR3);
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 _vsnwprintf(VAR4, 100-1, VAR3, VAR6);
 FUN3(VAR6);
 FUN4(VAR4);
 }
 }
}
void FUN5()
{
 wchar_t * VAR3;
 wchar_t VAR7[100] = VAR5"";
 VAR3 = VAR7;
 {
 size_t VAR8 = wcslen(VAR3);
 VAR9 * VAR10;
 if (100-VAR8 > 1)
 {
 VAR10 = fopen(VAR11, "");
 if (VAR10 != NULL)
 {
 /* POTENTIAL FLAW: Read data from a file */
 if (FUN6(VAR3+VAR8, (int)(100-VAR8), VAR10) == NULL)
 {
 FUN7("");
 VAR3[VAR8] = VAR5'';
 }
 fclose(VAR10);
 }
 }
 }
 VAR2 = 1;
 FUN1(VAR3, VAR3);
}
#endif
