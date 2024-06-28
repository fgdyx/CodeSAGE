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
 {
 wchar_t VAR7[100] = VAR6"";
 FUN2(VAR7, 100-1, VAR2);
 FUN3(VAR7);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 {
 size_t VAR8 = wcslen(VAR2);
 wchar_t * VAR9 = FUN5(VAR10);
 if (VAR9 != NULL)
 {
 wcsncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t VAR7[100] = VAR6"";
 FUN2(VAR7, 100-1, VAR6"", VAR2);
 FUN3(VAR7);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
