#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(wchar_t * VAR5);
static void FUN2()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 {
 size_t VAR8 = wcslen(VAR5);
 wchar_t * VAR9 = FUN3(VAR10);
 if (VAR9 != NULL)
 {
 wcsncat(VAR5+VAR8, VAR9, 100-VAR8-1);
 }
 }
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN4(wchar_t * VAR5);
static void FUN5()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 {
 size_t VAR8 = wcslen(VAR5);
 wchar_t * VAR9 = FUN3(VAR10);
 if (VAR9 != NULL)
 {
 wcsncat(VAR5+VAR8, VAR9, 100-VAR8-1);
 }
 }
 VAR3 = 1;
 FUN4(VAR5);
}
void FUN6(wchar_t * VAR5);
static void FUN7()
{
 wchar_t * VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR5 = VAR6;
 wcscpy(VAR5, VAR7"");
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN8()
{
 FUN2();
 FUN5();
 FUN7();
}
#endif
