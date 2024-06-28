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
 HMODULE VAR7;
 VAR7 = LoadLibraryW(VAR2);
 if (VAR7 != NULL)
 {
 FUN2(VAR7);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
