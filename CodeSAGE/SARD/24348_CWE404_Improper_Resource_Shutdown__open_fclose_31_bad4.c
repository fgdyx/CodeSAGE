#ifndef VAR1
void FUN1()
{
 int VAR2;
 VAR2 = -1;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
 {
 int VAR7 = VAR2;
 int VAR2 = VAR7;
 if (VAR2 != -1)
 {
 /* FLAW: Attempt to close the file using fclose() instead of close() */
 fclose((VAR8 *)VAR2);
 }
 }
}
#endif
