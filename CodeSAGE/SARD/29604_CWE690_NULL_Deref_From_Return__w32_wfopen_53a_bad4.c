#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR3 = _wfopen(VAR4"", VAR4"");
 FUN1(VAR3);
}
#endif
