#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR2 = VAR3;
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
