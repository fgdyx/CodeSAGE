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
 if (100-VAR7 > 1)
 {
 if (FUN5(VAR2+VAR7, (int)(100-VAR7), stdin) != NULL)
 {
 VAR7 = wcslen(VAR2);
 if (VAR7 > 0 && VAR2[VAR7-1] == VAR4'')
 {
 VAR2[VAR7-1] = VAR4'';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR7] = VAR4'';
 }
 }
 }
 const VAR5& VAR6 = FUN7();
 VAR6.FUN3(VAR2);
}
void FUN8()
{
 FUN1();
 FUN4();
}
#endif
