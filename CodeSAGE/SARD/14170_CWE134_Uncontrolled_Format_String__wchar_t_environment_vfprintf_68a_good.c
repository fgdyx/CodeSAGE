#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 VAR5 = VAR2;
 FUN1();
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR6 = wcslen(VAR2);
 wchar_t * VAR7 = FUN5(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR2+VAR6, VAR7, 100-VAR6-1);
 }
 }
 VAR9 = VAR2;
 FUN2();
}
void FUN6()
{
 FUN3();
 FUN4();
}
#endif
