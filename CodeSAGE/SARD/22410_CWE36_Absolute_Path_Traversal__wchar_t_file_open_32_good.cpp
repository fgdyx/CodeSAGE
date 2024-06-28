#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
#ifdef VAR8
 wcscat(VAR2, VAR7"");
#else
 wcscat(VAR2, VAR7"");
#endif
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 int VAR9;
 VAR9 = FUN2(VAR2, VAR10|VAR11, VAR12|VAR13);
 if (VAR9 != -1)
 {
 FUN3(VAR9);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
