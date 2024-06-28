#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 HANDLE VAR3;
 wchar_t * VAR4 = VAR5"";
 wchar_t * VAR6 = VAR5"";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR4,
 VAR6,
 VAR2,
 VAR7,
 VAR8,
 &VAR3) != 0)
 {
 FUN3("");
 FUN4(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
void FUN5()
{
 wchar_t * VAR2;
 void (*VAR9) (wchar_t *) = VAR10;
 wchar_t VAR11[100] = VAR5"";
 VAR2 = VAR11;
 /* FLAW: Use a hardcoded password */
 wcscpy(VAR2, VAR12);
 FUN6(VAR2);
}
#endif
