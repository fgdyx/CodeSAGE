#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100] = VAR5"";
 VAR2 = VAR4;
 wcscat(VAR2, VAR5"");
 {
 wchar_t * VAR2 = VAR3;
 _wspawnl(VAR6, VAR7, VAR7, VAR8, VAR9, VAR10, NULL);
 }
}
void FUN2()
{
 FUN1();
}
#endif
