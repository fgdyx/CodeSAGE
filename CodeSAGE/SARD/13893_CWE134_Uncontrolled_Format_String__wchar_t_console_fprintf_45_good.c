#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 fwprintf(VAR4, VAR2);
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 wcscpy(VAR2, VAR6"");
 VAR3 = VAR2;
 FUN1();
}
static void FUN3()
{
 wchar_t * VAR2 = VAR7;
 fwprintf(VAR4, VAR6"", VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 size_t VAR8 = wcslen(VAR2);
 if (100-VAR8 > 1)
 {
 if (FUN5(VAR2+VAR8, (int)(100-VAR8), stdin) != NULL)
 {
 VAR8 = wcslen(VAR2);
 if (VAR8 > 0 && VAR2[VAR8-1] == VAR6'')
 {
 VAR2[VAR8-1] = VAR6'';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR8] = VAR6'';
 }
 }
 }
 VAR7 = VAR2;
 FUN3();
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
