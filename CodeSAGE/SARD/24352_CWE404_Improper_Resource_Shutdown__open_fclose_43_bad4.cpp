#ifndef VAR1
static void FUN1(int &VAR2)
{
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN2("", VAR3|VAR4, VAR5|VAR6);
}
void FUN3()
{
 int VAR2;
 VAR2 = -1;
 FUN1(VAR2);
 if (VAR2 != -1)
 {
 /* FLAW: Attempt to close the file using fclose() instead of close() */
 fclose((VAR7 *)VAR2);
 }
}
#endif
