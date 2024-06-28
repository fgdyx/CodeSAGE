#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wcscpy(VAR2, VAR3"");
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR3"";
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
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
