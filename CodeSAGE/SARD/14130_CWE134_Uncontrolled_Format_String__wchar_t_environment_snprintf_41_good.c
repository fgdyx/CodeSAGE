#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100] = VAR4"";
 FUN2(VAR3, 100-1, VAR2);
 FUN3(VAR3);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 wcscpy(VAR2, VAR4"");
 FUN1(VAR2);
}
static void FUN5(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100] = VAR4"";
 FUN2(VAR3, 100-1, VAR4"", VAR2);
 FUN3(VAR3);
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR4"";
 VAR2 = VAR5;
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN7(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 FUN5(VAR2);
}
void FUN8()
{
 FUN6();
 FUN4();
}
#endif
