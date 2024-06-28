#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 wcsncat(VAR2, VAR3, 100);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t * VAR5 = (wchar_t *)FUN4(50*sizeof(wchar_t));
 wchar_t * VAR6 = (wchar_t *)FUN4(100*sizeof(wchar_t));
 VAR2 = VAR6;
 VAR2[0] = VAR4'';
 FUN1(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
