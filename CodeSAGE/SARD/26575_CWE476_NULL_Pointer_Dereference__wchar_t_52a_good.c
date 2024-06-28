#ifndef VAR1
void FUN1(wchar_t * VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 VAR2 = VAR3"";
 FUN1(VAR2);
}
void FUN3(wchar_t * VAR2);
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
