#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR4 = FUN2("","",stdin);
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 if (VAR4 != NULL)
 {
 /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
 FUN3((VAR5)VAR4);
 }
 }
}
#endif
