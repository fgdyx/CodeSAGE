#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR3 FUN2(VAR2);
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = NULL;
 VAR4 FUN4(VAR2);
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
