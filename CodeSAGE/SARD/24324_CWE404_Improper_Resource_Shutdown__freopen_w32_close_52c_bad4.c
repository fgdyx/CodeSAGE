#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 /* FLAW: Attempt to close the file using close() instead of fclose() */
 FUN2((int)VAR3);
 }
}
#endif
