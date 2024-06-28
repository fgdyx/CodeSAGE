#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(5!=5)
 {
 FUN2("");
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
 FUN3(VAR5);
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
 if(5==5)
 {
 wcscpy(VAR2, VAR4"");
 }
 {
 HMODULE VAR5;
 VAR5 = LoadLibraryW(VAR2);
 if (VAR5 != NULL)
 {
 FUN3(VAR5);
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
