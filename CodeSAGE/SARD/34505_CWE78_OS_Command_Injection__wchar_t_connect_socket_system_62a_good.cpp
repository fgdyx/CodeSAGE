#ifndef VAR1
void FUN1(wchar_t * &VAR2);
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 FUN1(VAR2);
 if (FUN3(VAR2) <= 0)
 {
 FUN4("");
 FUN5(1);
 }
}
void FUN6()
{
 FUN2();
}
#endif
