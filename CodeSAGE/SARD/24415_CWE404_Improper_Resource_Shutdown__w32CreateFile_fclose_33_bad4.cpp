#ifndef VAR1
void FUN1()
{
 HANDLE VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = VAR5;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN2("",
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 {
 HANDLE VAR2 = VAR4;
 if (VAR2 != VAR5)
 {
 /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
 fclose((VAR10 *)VAR2);
 }
 }
}
#endif
