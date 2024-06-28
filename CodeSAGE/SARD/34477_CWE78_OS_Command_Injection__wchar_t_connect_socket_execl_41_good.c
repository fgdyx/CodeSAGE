#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 FUN2(VAR3, VAR3, VAR4, VAR5, VAR6, NULL);
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR7[100] = VAR8"";
 VAR2 = VAR7;
 wcscat(VAR2, VAR8"");
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
