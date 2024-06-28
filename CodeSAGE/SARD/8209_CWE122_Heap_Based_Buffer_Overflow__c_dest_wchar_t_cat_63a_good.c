#ifndef VAR1
void FUN1(wchar_t * * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 FUN1(&VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
