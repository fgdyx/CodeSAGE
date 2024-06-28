#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static wchar_t * FUN1(wchar_t * VAR4)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 wcscpy(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN3()
{
 wchar_t * VAR4;
 wchar_t VAR6[100] = VAR5"";
 VAR4 = VAR6;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 HMODULE VAR7;
 VAR7 = LoadLibraryW(VAR4);
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
static wchar_t * FUN5(wchar_t * VAR4)
{
 if(VAR3)
 {
 wcscpy(VAR4, VAR5"");
 }
 return VAR4;
}
static void FUN6()
{
 wchar_t * VAR4;
 wchar_t VAR6[100] = VAR5"";
 VAR4 = VAR6;
 VAR3 = 1;
 VAR4 = FUN5(VAR4);
 {
 HMODULE VAR7;
 VAR7 = LoadLibraryW(VAR4);
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 FUN2("");
 }
 else
 {
 FUN2("");
 }
 }
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
