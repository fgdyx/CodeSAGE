#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 FUN2(VAR3, VAR4, VAR4, VAR5, VAR6, VAR7, NULL);
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR8[100] = VAR9"";
 VAR2 = VAR8;
 wcscat(VAR2, VAR9"");
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
