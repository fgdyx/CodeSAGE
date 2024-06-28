#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 FUN2(VAR4, wcslen(VAR2), VAR5"", VAR2);
 FUN3(VAR2);
 free(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN4();
}
#endif
