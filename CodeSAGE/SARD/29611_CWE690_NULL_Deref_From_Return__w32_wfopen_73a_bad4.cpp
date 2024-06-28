#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4);
void FUN2()
{
 VAR3 * VAR5;
 VAR2<VAR3 *> VAR4;
 VAR5 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR5 = _wfopen(VAR6"", VAR6"");
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 VAR4.FUN3(VAR5);
 FUN1(VAR4);
}
#endif
