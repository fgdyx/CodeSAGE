#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN3(100*sizeof(wchar_t));
 VAR3 = VAR4;
 wmemset(VAR3, VAR5'', 50-1);
 VAR3[50-1] = VAR5'';
 FUN1(&VAR3);
}
void FUN4()
{
 FUN2();
}
#endif
