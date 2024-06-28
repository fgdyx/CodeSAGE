#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 wcscat(VAR2, VAR7"");
 {
 wchar_t * VAR2 = VAR3;
 {
 HANDLE VAR8;
 VAR8 = FUN2(VAR2,
 (VAR9|VAR10),
 0,
 NULL,
 VAR11,
 VAR12,
 NULL);
 if (VAR8 != VAR13)
 {
 FUN3(VAR8);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
