#ifndef VAR1
extern int VAR2;
void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 if (VAR4 != NULL)
 {
 /* FLAW: Attempt to close the file using CloseHandle() instead of fclose() */
 FUN2((VAR5)VAR4);
 }
 }
}
#endif
