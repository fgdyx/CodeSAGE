#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 wchar_t * VAR5 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR2 = VAR5;
 wmemset(VAR2, VAR6'', 50-1);
 VAR2[50-1] = VAR6'';
 FUN4(VAR2);
}
void FUN5()
{
 FUN2();
}
#endif
