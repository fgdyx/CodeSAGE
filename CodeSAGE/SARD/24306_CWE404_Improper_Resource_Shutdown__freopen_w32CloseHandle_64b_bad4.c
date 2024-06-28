#ifndef VAR1
void FUN1(void * VAR2)
{
 VAR3 * * VAR4 = (VAR3 * *)VAR2;
 VAR3 * VAR5 = (*VAR4);
 if (VAR5 != NULL)
 {
 /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
 FUN2((VAR6)VAR5);
 }
}
#endif
