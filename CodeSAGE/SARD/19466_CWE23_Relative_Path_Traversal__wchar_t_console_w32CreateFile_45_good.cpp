#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 HANDLE VAR4;
 VAR4 = FUN2(VAR2,
 (VAR5|VAR6),
 0,
 NULL,
 VAR7,
 VAR8,
 NULL);
 if (VAR4 != VAR9)
 {
 FUN3(VAR4);
 }
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR10[VAR11] = VAR12;
 VAR2 = VAR10;
 wcscat(VAR2, VAR13"");
 VAR3 = VAR2;
 FUN1();
}
void FUN5()
{
 FUN4();
}
#endif
