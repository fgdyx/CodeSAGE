#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 HMODULE VAR3;
 VAR3 = LoadLibraryW(VAR2);
 if (VAR3 != NULL)
 {
 FUN2(VAR3);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
