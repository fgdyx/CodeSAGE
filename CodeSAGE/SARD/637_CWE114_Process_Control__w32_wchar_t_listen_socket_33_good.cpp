#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 {
 wchar_t * VAR2 = VAR3;
 {
 HMODULE VAR6;
 VAR6 = LoadLibraryW(VAR2);
 if (VAR6 != NULL)
 {
 FUN2(VAR6);
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
