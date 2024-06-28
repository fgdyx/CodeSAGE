#ifndef VAR1
void FUN1(VAR2 * &VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 FUN1(VAR3);
 if (VAR3 != NULL)
 {
 /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
 FUN3((VAR4)VAR3);
 }
}
#endif
