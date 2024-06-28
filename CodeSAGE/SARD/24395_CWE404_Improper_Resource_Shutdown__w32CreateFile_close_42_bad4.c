#ifndef VAR1
static VAR2 FUN1(HANDLE VAR3)
{
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = FUN2("",
 (VAR4|VAR5),
 0,
 NULL,
 VAR6,
 VAR7,
 NULL);
 return VAR3;
}
void FUN3()
{
 HANDLE VAR3;
 VAR3 = VAR8;
 VAR3 = FUN1(VAR3);
 if (VAR3 != VAR8)
 {
 /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
 FUN4((int)VAR3);
 }
}
#endif
