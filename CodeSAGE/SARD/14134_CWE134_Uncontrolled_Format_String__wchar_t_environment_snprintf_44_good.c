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
 void (*VAR5) (wchar_t *) = VAR6;
 wchar_t VAR7[100] = VAR4"";
 VAR2 = VAR7;
 wcscpy(VAR2, VAR4"");
 FUN5(VAR2);
}
static void FUN6(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100] = VAR4"";
 FUN2(VAR3, 100-1, VAR4"", VAR2);
 FUN3(VAR3);
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 void (*VAR5) (wchar_t *) = VAR8;
 wchar_t VAR7[100] = VAR4"";
 VAR2 = VAR7;
 {
 size_t VAR9 = wcslen(VAR2);
 wchar_t * VAR10 = FUN8(VAR11);
 if (VAR10 != NULL)
 {
 wcsncat(VAR2+VAR9, VAR10, 100-VAR9-1);
 }
 }
 FUN5(VAR2);
}
void FUN9()
{
 FUN4();
 FUN7();
}
#endif
