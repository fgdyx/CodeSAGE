#ifndef VAR1
void FUN1()
{
 int VAR2;
 HANDLE VAR3;
 VAR3 = VAR4;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = FUN2("",
 (VAR5|VAR6),
 0,
 NULL,
 VAR7,
 VAR8,
 NULL);
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 if (VAR3 != VAR4)
 {
 /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
 fclose((VAR9 *)VAR3);
 }
 }
}
#endif
