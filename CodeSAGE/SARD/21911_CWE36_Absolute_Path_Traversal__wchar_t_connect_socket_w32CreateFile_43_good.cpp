#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
#ifdef VAR3
 wcscat(VAR2, VAR4"");
#else
 wcscat(VAR2, VAR4"");
#endif
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR5[VAR6] = VAR4"";
 VAR2 = VAR5;
 FUN1(VAR2);
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
