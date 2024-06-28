#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 {
 HMODULE VAR6;
 VAR6 = LoadLibraryW(VAR2);
 if (VAR6 != NULL)
 {
 FUN3(VAR6);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR7)
 {
 wcscpy(VAR2, VAR4"");
 }
 {
 HMODULE VAR6;
 VAR6 = LoadLibraryW(VAR2);
 if (VAR6 != NULL)
 {
 FUN3(VAR6);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
