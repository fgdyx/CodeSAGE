#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 VAR4 FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
