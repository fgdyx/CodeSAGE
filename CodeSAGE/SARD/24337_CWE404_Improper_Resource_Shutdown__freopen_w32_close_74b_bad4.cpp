#ifndef VAR1
void FUN1(VAR2<int, VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 if (VAR5 != NULL)
 {
 /* FLAW: Attempt to close the file using close() instead of fclose() */
 FUN2((int)VAR5);
 }
}
#endif
