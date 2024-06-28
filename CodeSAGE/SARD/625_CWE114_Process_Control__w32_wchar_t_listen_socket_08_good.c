#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 {
 HMODULE VAR5;
 VAR5 = LoadLibraryW(VAR2);
 if (VAR5 != NULL)
 {
 FUN4(VAR5);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN6())
 {
 wcscpy(VAR2, VAR4"");
 }
 {
 HMODULE VAR5;
 VAR5 = LoadLibraryW(VAR2);
 if (VAR5 != NULL)
 {
 FUN4(VAR5);
 FUN3("");
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN7()
{
 FUN1();
 FUN5();
}
#endif
