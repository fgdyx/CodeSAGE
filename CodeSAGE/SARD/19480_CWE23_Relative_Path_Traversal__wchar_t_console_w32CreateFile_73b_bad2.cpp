#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 HANDLE VAR5;
 /* POTENTIAL FLAW: Possibly creating and opening a file without validating the file name or path */
 VAR5 = FUN3(VAR4,
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 if (VAR5 != VAR10)
 {
 FUN4(VAR5);
 }
 }
}
#endif
