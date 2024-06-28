#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 FUN2(VAR4, wcslen(VAR2), VAR5"", VAR2);
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t * VAR6 = (wchar_t *)FUN5(100*sizeof(wchar_t));
 VAR2 = VAR6;
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
void FUN6()
{
 FUN4();
}
#endif
