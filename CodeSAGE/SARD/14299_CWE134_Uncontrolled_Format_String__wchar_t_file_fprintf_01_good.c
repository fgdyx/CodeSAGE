#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 fwprintf(VAR5, VAR2);
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR6 = wcslen(VAR2);
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (FUN3(VAR2+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN4("");
 VAR2[VAR6] = VAR4'';
 }
 fclose(VAR8);
 }
 }
 }
 fwprintf(VAR5, VAR4"", VAR2);
}
void FUN5()
{
 FUN1();
 FUN2();
}
#endif
