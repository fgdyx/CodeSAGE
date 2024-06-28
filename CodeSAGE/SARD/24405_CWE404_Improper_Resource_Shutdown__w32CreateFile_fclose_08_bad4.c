#ifndef VAR1
void FUN1()
{
 HANDLE VAR2;
 VAR2 = VAR3;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN2("",
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 if(FUN3())
 {
 if (VAR2 != VAR3)
 {
 /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
 fclose((VAR8 *)VAR2);
 }
 }
}
#endif
