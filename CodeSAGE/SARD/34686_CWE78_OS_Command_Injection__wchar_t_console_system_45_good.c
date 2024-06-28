#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 if (FUN2(VAR2) <= 0)
 {
 FUN3("");
 FUN4(1);
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5;
 VAR2 = VAR4;
 wcscat(VAR2, VAR6"");
 VAR3 = VAR2;
 FUN1();
}
void FUN6()
{
 FUN5();
}
#endif
