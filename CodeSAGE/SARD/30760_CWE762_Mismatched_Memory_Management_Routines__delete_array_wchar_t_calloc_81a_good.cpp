#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
static void FUN4()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR2 = (wchar_t *)calloc(100, sizeof(wchar_t));
 const VAR3& VAR4 = FUN5();
 VAR4.FUN3(VAR2);
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
