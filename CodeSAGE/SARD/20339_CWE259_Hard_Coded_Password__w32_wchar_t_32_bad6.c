#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[100] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 /* FLAW: Use a hardcoded password */
 wcscpy(VAR2, VAR7);
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 HANDLE VAR8;
 wchar_t * VAR9 = VAR6"";
 wchar_t * VAR10 = VAR6"";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR9,
 VAR10,
 VAR2,
 VAR11,
 VAR12,
 &VAR8) != 0)
 {
 FUN3("");
 FUN4(VAR8);
 }
 else
 {
 FUN3("");
 }
 }
 }
}
#endif
