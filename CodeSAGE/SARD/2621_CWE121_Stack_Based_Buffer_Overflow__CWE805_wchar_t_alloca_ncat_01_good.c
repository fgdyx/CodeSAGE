#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(50*sizeof(wchar_t));
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 {
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 wcsncat(VAR2, VAR6, 100);
 FUN3(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
