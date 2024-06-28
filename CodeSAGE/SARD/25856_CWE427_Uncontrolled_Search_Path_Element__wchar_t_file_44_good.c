#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 FUN2(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t VAR5[250] = VAR6"";
 VAR2 = VAR5;
 wcscat(VAR2, VAR7);
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
