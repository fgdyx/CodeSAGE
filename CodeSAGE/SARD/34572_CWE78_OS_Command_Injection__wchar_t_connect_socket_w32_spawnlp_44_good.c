#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 FUN2(VAR3, VAR4, VAR4, VAR5, VAR6, VAR7, NULL);
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR8) (wchar_t *) = VAR9;
 wchar_t VAR10[100] = VAR11"";
 VAR2 = VAR10;
 wcscat(VAR2, VAR11"");
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
