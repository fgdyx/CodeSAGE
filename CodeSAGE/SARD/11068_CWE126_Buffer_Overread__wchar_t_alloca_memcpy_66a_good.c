#ifndef VAR1
void FUN1(wchar_t * VAR2[]);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR2[5];
 wchar_t * VAR4 = (wchar_t *)FUN3(50*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 wmemset(VAR4, VAR6'', 50-1);
 VAR4[50-1] = VAR6'';
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 VAR3 = VAR5;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
