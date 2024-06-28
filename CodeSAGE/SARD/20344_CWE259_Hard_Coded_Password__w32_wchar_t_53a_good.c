#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 {
 size_t VAR5 = 0;
 if (FUN3(VAR2, 100, stdin) == NULL)
 {
 FUN4("");
 VAR2[0] = VAR4'';
 }
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0)
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 FUN1(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
