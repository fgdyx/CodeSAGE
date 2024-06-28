#ifndef VAR1
static void FUN1()
{
 HANDLE VAR2 = VAR3;
 if (VAR2 != VAR4)
 {
 /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
 fclose((VAR5 *)VAR2);
 }
}
void FUN2()
{
 HANDLE VAR2;
 VAR2 = VAR4;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN3("",
 (VAR6|VAR7),
 0,
 NULL,
 VAR8,
 VAR9,
 NULL);
 VAR3 = VAR2;
 FUN1();
}
#endif
