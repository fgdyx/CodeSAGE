#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Open a file without checking the return value for NULL */
 VAR3 = _wfopen(VAR4"", VAR4"");
 {
 VAR2 * VAR5 = VAR3;
 VAR2 * VAR3 = VAR5;
 /* FLAW: if the fopen failed, data will be NULL here */
 fclose(VAR3);
 }
}
#endif
