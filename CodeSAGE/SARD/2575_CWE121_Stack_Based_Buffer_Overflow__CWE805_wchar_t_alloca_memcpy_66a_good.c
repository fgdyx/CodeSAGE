#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t * VAR4 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR3 = VAR5;
 VAR3[0] = VAR6'';
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
