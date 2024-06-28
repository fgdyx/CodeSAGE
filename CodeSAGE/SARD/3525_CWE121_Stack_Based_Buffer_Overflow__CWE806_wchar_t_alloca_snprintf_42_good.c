#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
 {
 wchar_t VAR5[50] = VAR3"";
 FUN4(VAR5, wcslen(VAR2), VAR3"", VAR2);
 FUN5(VAR2);
 }
}
void FUN6()
{
 FUN2();
}
#endif
