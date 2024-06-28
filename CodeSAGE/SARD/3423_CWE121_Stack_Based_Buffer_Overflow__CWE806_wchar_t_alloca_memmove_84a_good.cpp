#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * VAR3 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR3;
 VAR4 * VAR5 = new FUN3(VAR2);
 delete VAR5;
}
void FUN4()
{
 FUN1();
}
#endif
