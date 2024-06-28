#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 FUN2(VAR3, VAR3, VAR4, VAR5, VAR6, NULL);
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR7) (wchar_t *) = VAR8;
 wchar_t VAR9[100] = VAR10"";
 VAR2 = VAR9;
 wcscat(VAR2, VAR10"");
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
