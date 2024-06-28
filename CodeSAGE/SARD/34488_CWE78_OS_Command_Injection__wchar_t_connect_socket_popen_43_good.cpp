#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wcscat(VAR2, VAR3"");
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[100] = VAR5;
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 VAR6 *VAR7;
 VAR7 = FUN3(VAR2, VAR3"");
 if (VAR7 != NULL)
 {
 FUN4(VAR7);
 }
 }
}
void FUN5()
{
 FUN2();
}
#endif
