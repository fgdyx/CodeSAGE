#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 HMODULE VAR5;
 VAR5 = LoadLibraryW(VAR2);
 if (VAR5 != NULL)
 {
 FUN3(VAR5);
 FUN4("");
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5()
{
 FUN2();
}
#endif
