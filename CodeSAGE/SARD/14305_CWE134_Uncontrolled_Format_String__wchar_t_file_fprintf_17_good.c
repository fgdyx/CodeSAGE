#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR7 = wcslen(VAR4);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 if (FUN2(VAR4+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN3("");
 VAR4[VAR7] = VAR6'';
 }
 fclose(VAR9);
 }
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 fwprintf(VAR11, VAR6"", VAR4);
 }
}
static void FUN4()
{
 int VAR12,VAR13;
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 for(VAR12 = 0; VAR12 < 1; VAR12++)
 {
 wcscpy(VAR4, VAR6"");
 }
 for(VAR13 = 0; VAR13 < 1; VAR13++)
 {
 fwprintf(VAR11, VAR4);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
