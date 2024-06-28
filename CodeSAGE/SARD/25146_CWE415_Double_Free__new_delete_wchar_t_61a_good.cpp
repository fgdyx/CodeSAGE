#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 delete VAR2;
}
wchar_t * FUN3(wchar_t * VAR2);
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = FUN3(VAR2);
 ;
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
