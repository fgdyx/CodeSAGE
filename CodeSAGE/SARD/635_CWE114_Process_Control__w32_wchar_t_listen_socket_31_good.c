#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 {
 wchar_t * VAR5 = VAR2;
 wchar_t * VAR2 = VAR5;
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
