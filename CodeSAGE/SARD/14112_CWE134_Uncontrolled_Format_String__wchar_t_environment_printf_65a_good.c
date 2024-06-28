#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 wcscpy(VAR2, VAR6"");
 FUN3(VAR2);
}
void FUN4(wchar_t * VAR2);
static void FUN5()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR7;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 size_t VAR8 = wcslen(VAR2);
 wchar_t * VAR9 = FUN6(VAR10);
 if (VAR9 != NULL)
 {
 wcsncat(VAR2+VAR8, VAR9, 100-VAR8-1);
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
