#ifndef VAR1
void FUN1()
{
 HANDLE VAR2;
 CWE404_Improper_Resource_Shutdown__w32CreateFile_fclose_34_unionType VAR3;
 VAR2 = VAR4;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR2 = FUN2("",
 (VAR5|VAR6),
 0,
 NULL,
 VAR7,
 VAR8,
 NULL);
 VAR3.VAR9 = VAR2;
 {
 HANDLE VAR2 = VAR3.VAR10;
 if (VAR2 != VAR4)
 {
 /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
 fclose((VAR11 *)VAR2);
 }
 }
}
#endif
