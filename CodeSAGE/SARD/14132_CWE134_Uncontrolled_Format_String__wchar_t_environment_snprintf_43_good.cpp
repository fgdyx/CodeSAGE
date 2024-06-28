#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wcscpy(VAR2, VAR3"");
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR3"";
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 wchar_t VAR5[100] = VAR3"";
 FUN3(VAR5, 100-1, VAR2);
 FUN4(VAR5);
 }
}
static void FUN5(wchar_t * &VAR2)
{
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN6(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR3"";
 VAR2 = VAR4;
 FUN5(VAR2);
 {
 wchar_t VAR5[100] = VAR3"";
 FUN3(VAR5, 100-1, VAR3"", VAR2);
 FUN4(VAR5);
 }
}
void FUN8()
{
 FUN2();
 FUN7();
}
#endif
