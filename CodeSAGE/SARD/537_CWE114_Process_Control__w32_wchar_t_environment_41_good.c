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
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 FUN1(VAR2);
}
void FUN5()
{
 FUN4();
}
#endif
