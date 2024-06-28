#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wcscat(VAR2, VAR3"");
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR3"";
 VAR2 = VAR4;
 FUN1(VAR2);
 _wspawnl(VAR5, VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
void FUN3()
{
 FUN2();
}
#endif
