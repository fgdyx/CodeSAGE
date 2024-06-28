#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 fwprintf(VAR3, VAR2);
}
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR4) (wchar_t *) = VAR5;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 wcscpy(VAR2, VAR7"");
 FUN3(VAR2);
}
static void FUN4(wchar_t * VAR2)
{
 fwprintf(VAR3, VAR7"", VAR2);
}
static void FUN5()
{
 wchar_t * VAR2;
 void (*VAR4) (wchar_t *) = VAR8;
 wchar_t VAR6[100] = VAR7"";
 VAR2 = VAR6;
 {
 size_t VAR9 = wcslen(VAR2);
 VAR10 * VAR11;
 if (100-VAR9 > 1)
 {
 VAR11 = fopen(VAR12, "");
 if (VAR11 != NULL)
 {
 if (FUN6(VAR2+VAR9, (int)(100-VAR9), VAR11) == NULL)
 {
 FUN7("");
 VAR2[VAR9] = VAR7'';
 }
 fclose(VAR11);
 }
 }
 }
 FUN3(VAR2);
}
void FUN8()
{
 FUN2();
 FUN5();
}
#endif
