#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 FUN2(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR4[250] = VAR5"";
 VAR2 = VAR4;
 wcscat(VAR2, VAR6);
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
