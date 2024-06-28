#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 wcscat(VAR2, VAR6"");
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 wchar_t *VAR7[] = {VAR8, VAR9, VAR10, VAR11, NULL};
 FUN2(VAR12, VAR13, VAR7);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
