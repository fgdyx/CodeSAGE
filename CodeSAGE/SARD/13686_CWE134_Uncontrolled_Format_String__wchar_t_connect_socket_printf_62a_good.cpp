#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 FUN1(VAR2);
 FUN3(VAR2);
}
void FUN4(wchar_t * &VAR2);
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 FUN4(VAR2);
 FUN3(VAR4"", VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
