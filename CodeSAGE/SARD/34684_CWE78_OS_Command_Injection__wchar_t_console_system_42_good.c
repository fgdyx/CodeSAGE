#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wcscat(VAR2, VAR3"");
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5;
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
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
