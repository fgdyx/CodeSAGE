#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4;
 VAR2 = VAR3;
 wcscat(VAR2, VAR5"");
 FUN1(VAR2);
}
void FUN6()
{
 FUN5();
}
#endif
