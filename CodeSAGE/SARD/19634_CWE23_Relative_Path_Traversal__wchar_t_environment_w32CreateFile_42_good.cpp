#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wcscat(VAR2, VAR3"");
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
 {
 HANDLE VAR7;
 VAR7 = FUN3(VAR2,
 (VAR8|VAR9),
 0,
 NULL,
 VAR10,
 VAR11,
 NULL);
 if (VAR7 != VAR12)
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
