#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(FUN2())
 {
 /* FLAW: Use a hardcoded password */
 wcscpy(VAR2, VAR5);
 }
 {
 HANDLE VAR6;
 wchar_t * VAR7 = VAR4"";
 wchar_t * VAR8 = VAR4"";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN3(
 VAR7,
 VAR8,
 VAR2,
 VAR9,
 VAR10,
 &VAR6) != 0)
 {
 FUN4("");
 FUN5(VAR6);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
