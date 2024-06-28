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
 FUN3(VAR2);
}
static void FUN4(wchar_t * &VAR2)
{
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN5(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR3"";
 VAR2 = VAR4;
 FUN4(VAR2);
 FUN3(VAR3"", VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
