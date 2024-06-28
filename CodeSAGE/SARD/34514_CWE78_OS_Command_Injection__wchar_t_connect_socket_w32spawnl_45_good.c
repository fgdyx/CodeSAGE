#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 _wspawnl(VAR4, VAR5, VAR5, VAR6, VAR7, VAR8, NULL);
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR9[100] = VAR10"";
 VAR2 = VAR9;
 wcscat(VAR2, VAR10"");
 VAR3 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
