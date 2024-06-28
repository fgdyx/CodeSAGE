#ifndef VAR1
void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Use a hardcoded password */
 wcscpy(VAR3, VAR6);
 }
 {
 HANDLE VAR7;
 wchar_t * VAR8 = VAR5"";
 wchar_t * VAR9 = VAR5"";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR8,
 VAR9,
 VAR3,
 VAR10,
 VAR11,
 &VAR7) != 0)
 {
 FUN3("");
 FUN4(VAR7);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
