#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = FUN2("",
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
}
void FUN3()
{
 HANDLE VAR3;
 VAR3 = VAR8;
 FUN1(VAR3);
 if (VAR3 != VAR8)
 {
 /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
 FUN4((int)VAR3);
 }
}
#endif
