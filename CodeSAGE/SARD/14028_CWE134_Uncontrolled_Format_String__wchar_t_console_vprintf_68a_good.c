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
 if (100-VAR6 > 1)
 {
 if (FUN5(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR4'')
 {
 VAR2[VAR6-1] = VAR4'';
 }
 }
 else
 {
 FUN6("");
 VAR2[VAR6] = VAR4'';
 }
 }
 }
 VAR7 = VAR2;
 FUN2();
}
void FUN7()
{
 FUN3();
 FUN4();
}
#endif
