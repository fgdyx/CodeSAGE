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
 {
 HANDLE VAR8 = VAR2;
 HANDLE VAR2 = VAR8;
 if (VAR2 != VAR3)
 {
 /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
 FUN3((int)VAR2);
 }
 }
}
#endif
