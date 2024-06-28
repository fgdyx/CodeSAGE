#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 FUN1(VAR2);
 {
 wchar_t VAR3[50] = VAR4"";
 FUN3(VAR3, wcslen(VAR2), VAR4"", VAR2);
 FUN4(VAR2);
 free(VAR2);
 }
}
void FUN5()
{
 FUN2();
}
#endif
