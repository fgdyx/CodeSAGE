#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 HMODULE VAR7;
 VAR7 = LoadLibraryW(VAR4);
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
wchar_t * FUN5(wchar_t * VAR4);
static void FUN6()
{
 wchar_t * VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 HMODULE VAR7;
 VAR7 = LoadLibraryW(VAR4);
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
