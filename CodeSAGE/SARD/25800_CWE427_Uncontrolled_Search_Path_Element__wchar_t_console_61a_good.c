#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[250] = VAR4"";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
