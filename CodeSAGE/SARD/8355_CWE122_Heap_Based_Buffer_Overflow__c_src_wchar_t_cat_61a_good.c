#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR3[50] = VAR4"";
 wcscat(VAR3, VAR2);
 FUN3(VAR2);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
