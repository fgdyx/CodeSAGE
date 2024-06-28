#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 fwprintf(VAR3, VAR2);
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscpy(VAR2, VAR5"");
 FUN1(VAR2);
}
static void FUN3(wchar_t * VAR2)
{
 fwprintf(VAR3, VAR5"", VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 {
 size_t VAR6 = wcslen(VAR2);
 if (100-VAR6 > 1)
 {
 if (FUN5(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR5'')
 {
 VAR2[VAR6-1] = VAR5'';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR6] = VAR5'';
 }
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN4();
 FUN2();
}
#endif
