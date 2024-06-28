#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
#ifdef VAR3
 wcscat(VAR2, VAR4"");
#else
 wcscat(VAR2, VAR4"");
#endif
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR5[VAR6] = VAR4"";
 VAR2 = VAR5;
 VAR2 = FUN1(VAR2);
 {
 int VAR7;
 VAR7 = FUN3(VAR2, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
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
