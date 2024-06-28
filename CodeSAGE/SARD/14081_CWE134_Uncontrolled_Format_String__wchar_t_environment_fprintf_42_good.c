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
 fwprintf(VAR5, VAR2);
}
static wchar_t * FUN3(wchar_t * VAR2)
{
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN4(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 return VAR2;
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR3"";
 VAR2 = VAR4;
 VAR2 = FUN3(VAR2);
 fwprintf(VAR5, VAR3"", VAR2);
}
void FUN6()
{
 FUN5();
 FUN2();
}
#endif
