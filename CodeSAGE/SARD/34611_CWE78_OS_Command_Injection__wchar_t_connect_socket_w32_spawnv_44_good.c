#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 wchar_t *VAR3[] = {VAR4, VAR5, VAR6, VAR7, NULL};
 FUN2(VAR8, VAR4, VAR3);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR9) (wchar_t *) = VAR10;
 wchar_t VAR11[100] = VAR12"";
 VAR2 = VAR11;
 wcscat(VAR2, VAR12"");
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
