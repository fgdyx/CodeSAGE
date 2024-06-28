#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wcscat(VAR2, VAR3"");
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 FUN1(VAR2);
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
