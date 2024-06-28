#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR4"");
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR7 = wcslen(VAR2);
 wchar_t * VAR8 = FUN5(VAR9);
 if (VAR8 != NULL)
 {
 wcsncat(VAR2+VAR7, VAR8, 100-VAR7-1);
 }
 }
 const VAR5& VAR6 = FUN6();
 VAR6.FUN3(VAR2);
}
void FUN7()
{
 FUN1();
 FUN4();
}
#endif
