#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t *VAR4[] = {VAR5, VAR6, VAR7, VAR8, NULL};
 FUN2(VAR5, VAR4);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR9[100] = VAR10"";
 VAR2 = VAR9;
 wcscat(VAR2, VAR10"");
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
