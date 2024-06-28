#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 HMODULE VAR5;
 VAR5 = LoadLibraryW(VAR4);
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
#endif
