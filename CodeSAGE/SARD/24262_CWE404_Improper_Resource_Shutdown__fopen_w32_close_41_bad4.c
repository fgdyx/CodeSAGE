#ifndef VAR1
static void FUN1(VAR2 * VAR3)
{
 if (VAR3 != NULL)
 {
 /* FLAW: Attempt to close the file using close() instead of fclose() */
 FUN2((int)VAR3);
 }
}
void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = fopen("", "");
 FUN1(VAR3);
}
#endif
