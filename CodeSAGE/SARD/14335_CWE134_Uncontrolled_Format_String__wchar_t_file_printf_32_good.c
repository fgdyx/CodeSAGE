#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 wcscpy(VAR2, VAR6"");
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 {
 size_t VAR7 = wcslen(VAR2);
 VAR8 * VAR9;
 if (100-VAR7 > 1)
 {
 VAR9 = fopen(VAR10, "");
 if (VAR9 != NULL)
 {
 if (FUN4(VAR2+VAR7, (int)(100-VAR7), VAR9) == NULL)
 {
 FUN5("");
 VAR2[VAR7] = VAR6'';
 }
 fclose(VAR9);
 }
 }
 }
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 FUN2(VAR6"", VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
