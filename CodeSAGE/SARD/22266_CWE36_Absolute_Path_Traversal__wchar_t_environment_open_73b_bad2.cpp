#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 int VAR5;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5 = FUN3(VAR4, VAR6|VAR7, VAR8|VAR9);
 if (VAR5 != -1)
 {
 FUN4(VAR5);
 }
 }
}
#endif
