#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 HMODULE VAR4;
 VAR4 = LoadLibraryW(VAR2);
 if (VAR4 != NULL)
 {
 FUN2(VAR4);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
