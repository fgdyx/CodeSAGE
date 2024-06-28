#ifndef VAR1
static void FUN1()
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
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 wcscpy(VAR2, VAR6"");
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN4();
}
#endif
