#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 _wspawnl(VAR5, VAR6, VAR6, VAR7, VAR8, VAR9, NULL);
}
void FUN3()
{
 FUN2();
}
#endif
