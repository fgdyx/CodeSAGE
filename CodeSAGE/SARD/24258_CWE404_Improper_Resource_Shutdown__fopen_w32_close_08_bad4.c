#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = fopen("", "");
 if(FUN2())
 {
 if (VAR3 != NULL)
 {
 /* FLAW: Attempt to close the file using close() instead of fclose() */
 FUN3((int)VAR3);
 }
 }
}
#endif
