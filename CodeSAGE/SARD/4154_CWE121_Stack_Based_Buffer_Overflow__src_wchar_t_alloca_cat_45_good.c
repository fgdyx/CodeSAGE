#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[50] = VAR5"";
 wcscat(VAR4, VAR2);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t * VAR6 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR2 = VAR6;
 wmemset(VAR2, VAR5'', 50-1);
 VAR2[50-1] = VAR5'';
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN3();
}
#endif
