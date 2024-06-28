#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 /* FLAW: Use a hardcoded password */
 wcscpy(VAR2, VAR6);
 }
 {
 HANDLE VAR7;
 wchar_t * VAR8 = VAR4"";
 wchar_t * VAR9 = VAR4"";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR8,
 VAR9,
 VAR2,
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
