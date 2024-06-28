#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR4 = _wfopen(VAR5"", VAR5"");
 FUN1(&VAR4);
}
#endif
