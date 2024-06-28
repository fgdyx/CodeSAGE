#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[250] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 wcscat(VAR2, VAR7);
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 FUN2(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
