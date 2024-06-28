#ifndef VAR1
static void FUN1(wchar_t * VAR2)
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
 void (*VAR4) (wchar_t *) = VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 wcscpy(VAR2, VAR7"");
 FUN5(VAR2);
}
void FUN6()
{
 FUN4();
}
#endif
